// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIACATEGORY_H
#define VUIMEDIACATEGORY_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface VUIMediaCategory : NSObject

@property (copy, nonatomic) NSDictionary *supportedChildMediaCollectionTypes; // ivar: _supportedChildMediaCollectionTypes
@property (copy, nonatomic) NSSet *supportedMediaCollectionTypes; // ivar: _supportedMediaCollectionTypes
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)mediaCatgeoryForType:(NSUInteger)arg0 ;
-(id)_initWithType:(NSUInteger)arg0 ;
-(id)description;
-(id)init;


@end


#endif