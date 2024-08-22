// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI22CHECKLISTTIPDATALOADER_H
#define _TTC14FAMILYCIRCLEUI22CHECKLISTTIPDATALOADER_H

@protocol _TtP6TipKit28TPKContentControllerDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI22ChecklistTipDataLoader : NSObject <_TtP6TipKit28TPKContentControllerDelegate_>

 {
    ? checklistTipContext;
    ? tPKContentController;
    ? _showTipCell;
    ? checklistTipCell;
}




-(id)init;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissButtonWasTapped;


@end


#endif