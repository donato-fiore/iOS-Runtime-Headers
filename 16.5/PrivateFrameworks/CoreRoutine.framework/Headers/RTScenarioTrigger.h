// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTSCENARIOTRIGGER_H
#define RTSCENARIOTRIGGER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTScenarioTrigger : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)scenarioTriggerSettledStateToString:(NSUInteger)arg0 ;
+(id)scenarioTriggerTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif