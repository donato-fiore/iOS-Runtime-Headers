// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10SIRIFINDMY40SETSHAREDLOCATIONVISIBILITYINTENTHANDLER_H
#define _TTC10SIRIFINDMY40SETSHAREDLOCATIONVISIBILITYINTENTHANDLER_H

@protocol SetSharedLocationVisibilityIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC10SiriFindMy40SetSharedLocationVisibilityIntentHandler : NSObject <SetSharedLocationVisibilityIntentHandling>

 {
    ? deviceState;
    ? sessionManager;
}




-(id)init;
-(void)confirmSetSharedLocationVisibility:(id)arg0 completion:(id)arg1 ;
-(void)handleSetSharedLocationVisibility:(id)arg0 completion:(id)arg1 ;


@end


#endif