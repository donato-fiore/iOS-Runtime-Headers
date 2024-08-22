// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBPIPENDSTASHTABSUPPRESSIONGESTUREMANAGER_H
#define _SBPIPENDSTASHTABSUPPRESSIONGESTUREMANAGER_H

@class NSMutableSet, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate>

 {
    NSMutableSet *_targets;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(void)_addSystemRecognizers;
-(void)_removeGestureRecognizers;
-(void)addTarget:(id)arg0 ;
-(void)removeTarget:(id)arg0 ;


@end


#endif