// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESENTATIONOBSERVATIONTOKEN_H
#define SBPRESENTATIONOBSERVATIONTOKEN_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBPresentationObservationToken : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didDismissHandler; // ivar: _didDismissHandler
@property (copy, nonatomic) id *didPresentHandler; // ivar: _didPresentHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willDismissHandler; // ivar: _willDismissHandler
@property (copy, nonatomic) id *willPresentHandler; // ivar: _willPresentHandler


-(void)didDismiss;
-(void)didPresent;
-(void)invalidate;
-(void)willDismiss;
-(void)willPresent;


@end


#endif