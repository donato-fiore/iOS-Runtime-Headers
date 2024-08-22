// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOLICYROLLBACK_H
#define SUCOREPOLICYROLLBACK_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCorePolicyRollback : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (retain, nonatomic) NSDictionary *baseRollbackOptions; // ivar: _baseRollbackOptions
@property (nonatomic) BOOL performPhase; // ivar: _performPhase
@property (nonatomic) BOOL performRollbackApplyPhase; // ivar: _performRollbackApplyPhase
@property (nonatomic) BOOL performRollbackPreparePhase; // ivar: _performRollbackPreparePhase
@property (nonatomic) BOOL performRollbackResumePhase; // ivar: _performRollbackResumePhase
@property (nonatomic) BOOL performRollbackSuspendPhase; // ivar: _performRollbackSuspendPhase
@property (nonatomic) BOOL skipCancelPreviousUpdate; // ivar: _skipCancelPreviousUpdate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif