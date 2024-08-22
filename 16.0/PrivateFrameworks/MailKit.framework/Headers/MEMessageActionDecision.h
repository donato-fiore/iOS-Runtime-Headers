// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEMESSAGEACTIONDECISION_H
#define MEMESSAGEACTIONDECISION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageActionDecision : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL invokeAgainWithBody; // ivar: _invokeAgainWithBody


+(BOOL)supportsSecureCoding;
+(id)decisionApplyingAction:(id)arg0 ;
+(id)decisionApplyingActions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithActions:(id)arg0 invokeAgainWithBody:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif