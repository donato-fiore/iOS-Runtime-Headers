// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNREPUTATIONHANDLE_H
#define CNREPUTATIONHANDLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNReputationHandle : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)descriptionForType:(NSInteger)arg0 ;
+(id)handleWithEmailAddress:(id)arg0 ;
+(id)handleWithPhoneNumber:(id)arg0 ;
+(id)handleWithStringValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStringValue:(id)arg0 type:(NSInteger)arg1 ;
-(void)configureBuilder:(id)arg0 ;


@end


#endif