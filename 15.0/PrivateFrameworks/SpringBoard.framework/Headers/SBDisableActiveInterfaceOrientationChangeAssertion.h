// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDISABLEACTIVEINTERFACEORIENTATIONCHANGEASSERTION_H
#define SBDISABLEACTIVEINTERFACEORIENTATIONCHANGEASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject <BSInvalidatable>

 {
    NSString *_reason;
    BOOL _invalidated;
    BOOL _nudge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReason:(id)arg0 nudgeOrientationOnInvalidate:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif