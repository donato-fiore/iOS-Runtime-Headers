// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFFRAMERATEASSERTION_H
#define SBFFRAMERATEASSERTION_H

@class BSSimpleAssertion, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFFrameRateAssertion : NSObject <BSInvalidatable>

 {
    BSSimpleAssertion *_assertion;
    _UIUpdateRequest _updateRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrameRateRange:(struct CAFrameRateRange )arg0 highFrameRateReason:(unsigned int)arg1 ;
-(void)invalidate;


@end


#endif