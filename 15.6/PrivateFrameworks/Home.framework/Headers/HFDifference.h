// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDIFFERENCE_H
#define HFDIFFERENCE_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFDifference : NSObject <NSCopying>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)difference:(id)arg0 ;
+(id)difference:(id)arg0 priority:(NSUInteger)arg1 ;
+(id)difference:(id)arg0 priority:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(id)_subclass_description;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilder;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 priority:(NSUInteger)arg1 ;
-(id)withPriority:(NSUInteger)arg0 ;


@end


#endif