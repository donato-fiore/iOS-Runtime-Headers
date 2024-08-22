// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSWIFICONFIGURATIONACTION_H
#define BCSWIFICONFIGURATIONACTION_H



#import "BCSAction.h"

@interface BCSWiFiConfigurationAction : BCSAction



-(BOOL)isWiFiAction;
-(id)_wiFiConfigurationData;
-(id)actionIcon;
-(id)actionPickerItems;
-(id)debugDescriptionExtraInfoDictionary;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)localizedDefaultActionDescription;
-(void)performDefaultAction;
-(void)performDefaultActionWithCompletionHandler:(id)arg0 ;


@end


#endif