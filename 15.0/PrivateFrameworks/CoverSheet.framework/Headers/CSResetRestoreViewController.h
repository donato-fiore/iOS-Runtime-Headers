// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSRESETRESTOREVIEWCONTROLLER_H
#define CSRESETRESTOREVIEWCONTROLLER_H

@protocol CSResetRestoreStatusProviding;


#import "CSModalViewControllerBase.h"

@interface CSResetRestoreViewController : CSModalViewControllerBase {
    id<CSResetRestoreStatusProviding> *_statusProvider;
}




-(NSInteger)presentationPriority;
-(id)_currentTextForResetOrRestoreState;
-(id)initWithStatusProvider:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif