// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMULTIROUNDAUTOFILLMANAGER_H
#define WBSMULTIROUNDAUTOFILLMANAGER_H

@class NSTimer, NSMutableSet, NSSet, NSString;

#import <Foundation/Foundation.h>

#import "WBSFormMetadata.h"

@interface WBSMultiRoundAutoFillManager : NSObject {
    NSUInteger _autoFillAttemptTrigger;
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;
    BOOL _userDidInteractWithForm;
    NSUInteger _numberOfFollowUpAutoFillAttempts;
    NSTimer *_timerForFollowUpAutoFill;
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;
}


@property (copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled; // ivar: _addressBookPropertiesThatCanBeFilled
@property (copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass; // ivar: _addressSetLabelUsedDuringFirstAutoFillPass


-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg0 requestType:(NSUInteger)arg1 ;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg0 ;
-(NSUInteger)currentAutoFillAttemptTrigger;
-(id)init;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg0 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg0 ;
-(void)dealloc;
-(void)didEditFormText;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg0 autoFillBlock:(id)arg1 ;


@end


#endif