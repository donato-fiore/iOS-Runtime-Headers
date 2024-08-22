// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17_APPINTENTS_UIKIT22UIAPPINTENTINTERACTION_H
#define _TTC17_APPINTENTS_UIKIT22UIAPPINTENTINTERACTION_H

@class UIView;
@protocol UIInteraction;

#import <Foundation/Foundation.h>


@interface _TtC17_AppIntents_UIKit22UIAppIntentInteraction : NSObject <UIInteraction>

 {
    ? viewActionNode;
}


@property (nonatomic, weak) UIView *view; // ivar: view


-(id)init;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif