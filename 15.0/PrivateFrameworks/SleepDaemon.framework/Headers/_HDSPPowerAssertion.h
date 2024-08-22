// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSPPOWERASSERTION_H
#define _HDSPPOWERASSERTION_H

@class NSString;
@protocol BSDescriptionProviding, HDSPAssertion;

#import <Foundation/Foundation.h>


@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion>



@property (readonly, nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (readonly, nonatomic) os_unfair_lock_s assertionLock; // ivar: _assertionLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger signpost_id; // ivar: _signpost_id
@property (readonly) Class superclass;


+(id)assertionWithIdentifier:(id)arg0 ;
+(id)assertionWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_locked_release;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)releaseAssertion;


@end


#endif