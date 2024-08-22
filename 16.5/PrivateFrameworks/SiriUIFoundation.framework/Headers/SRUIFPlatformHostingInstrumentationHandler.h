// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFPLATFORMHOSTINGINSTRUMENTATIONHANDLER_H
#define SRUIFPLATFORMHOSTINGINSTRUMENTATIONHANDLER_H

@class NSMutableDictionary, AFAnalyticsTurnBasedInstrumentationContext;
@protocol SRUIFPlatformHostingInstrumentationHandlerDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFPlatformHostingInstrumentationHandler : NSObject {
    NSMutableDictionary *_machAbsoluteForAppearances;
    AFAnalyticsTurnBasedInstrumentationContext *_bringUpTurnIdentifier;
    AFAnalyticsTurnBasedInstrumentationContext *_dismissalTurnIdentifier;
    id<SRUIFPlatformHostingInstrumentationHandlerDelegate> *_delegate;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)_computeStateAndInstrumentIfNecessaryForEvent:(NSUInteger)arg0 ;
-(void)_instrumentForappearanceEvent:(NSUInteger)arg0 turn:(id)arg1 machAbolsuteTime:(NSUInteger)arg2 ;
-(void)appearanceDidChange:(NSUInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 ;
-(void)hostingBringUpProcessedWithTurnIdenitfier:(id)arg0 ;
-(void)hostingDismissalProcessedWithTurnIdenitfier:(id)arg0 ;


@end


#endif