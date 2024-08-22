// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIAITEMPROPERTYCOLLECTION_H
#define SHMEDIAITEMPROPERTYCOLLECTION_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface SHMediaItemPropertyCollection : NSObject

@property (readonly, nonatomic) NSSet *collection; // ivar: _collection
@property (readonly, nonatomic) NSString *property; // ivar: _property


+(id)collectionWithArray:(id)arg0 representingProperty:(id)arg1 ;
-(id)initWithArray:(id)arg0 representingProperty:(id)arg1 ;


@end


#endif