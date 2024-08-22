// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6TIPKIT15TIPKITVIEWMODEL_H
#define _TTC6TIPKIT15TIPKITVIEWMODEL_H

@protocol _TtP6TipKit28TPKContentControllerDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC6TipKit15TipKitViewModel : NSObject <_TtP6TipKit28TPKContentControllerDelegate_>

 {
    ? _hasContent;
    ? tipContentController;
    ? tipViewBackgroundColor;
    ? tipViewContentBackgroundColor;
    ? tipViewIcon;
    ? customizationHandler;
    ? personalizationHandler;
    ? clientContextMapHandler;
    ? eventOccurredHandler;
    ? _tipContent;
}




-(id)contentController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)contentController:(id)arg0 personalizedStringForID:(NSInteger)arg1 content:(id)arg2 ;
-(id)init;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 eventOccurred:(NSInteger)arg1 content:(id)arg2 context:(id)arg3 ;


@end


#endif