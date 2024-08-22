// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXWEAKREFERENCEOBJECT_H
#define SXWEAKREFERENCEOBJECT_H


#import <Foundation/Foundation.h>


@interface SXWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id *object; // ivar: _object


+(id)withObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithObject:(id)arg0 ;


@end


#endif