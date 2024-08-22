// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSDATADETECTORSSUPPORTEDACTION_H
#define BCSDATADETECTORSSUPPORTEDACTION_H

@class NSArray, UIMenu, DDUIAction, CNContact, NSString, DDScannerResult;
@protocol BCSActionDelegate;


#import "BCSAction.h"

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate>

 {
    NSArray *_actions;
    UIMenu *_ddUIMenu;
    DDUIAction *_defaultDDAction;
}


@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *icsString; // ivar: _icsString
@property (readonly, nonatomic) DDScannerResult *scannerResult; // ivar: _scannerResult
@property (readonly) Class superclass;


-(BOOL)preferItemsInSubmenu;
-(NSUInteger)menuElementsCount;
-(id)_actionStringsArray;
-(id)_hostingViewForAction;
-(id)actionIcon;
-(id)actionPickerItems;
-(id)contentPreviewString;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)localizedActionDescription;
-(id)localizedDefaultActionDescription;
-(id)menuElements;
-(id)shortDescription;
-(id)url;
-(void)_performActionAndShowActionPickerIfNeeded:(BOOL)arg0 ;
-(void)_setUpActionMenuIfNeeded;
-(void)determineActionabilityWithCompletionHandler:(id)arg0 ;
-(void)performAction;
-(void)performDefaultAction;


@end


#endif