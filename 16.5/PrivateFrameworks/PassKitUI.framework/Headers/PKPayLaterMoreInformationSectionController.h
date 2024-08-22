// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERMOREINFORMATIONSECTIONCONTROLLER_H
#define PKPAYLATERMOREINFORMATIONSECTIONCONTROLLER_H

@class UIImageSymbolConfiguration;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterMoreInformationSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    CGFloat _maxIconWidth;
    UIImageSymbolConfiguration *_iconFontConfiguration;
}




-(id)identifiers;
-(id)initWithSetupFlowController:(id)arg0 dynamicContentPage:(id)arg1 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDynamicSection:(id)arg0 snapshot:(id)arg1 ;


@end


#endif