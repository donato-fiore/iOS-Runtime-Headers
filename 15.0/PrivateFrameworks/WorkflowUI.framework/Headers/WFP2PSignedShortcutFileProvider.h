// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFP2PSIGNEDSHORTCUTFILEPROVIDER_H
#define WFP2PSIGNEDSHORTCUTFILEPROVIDER_H



#import "WFSignedShortcutFileProvider.h"

@interface WFP2PSignedShortcutFileProvider : WFSignedShortcutFileProvider



-(id)initWithWorkflow:(id)arg0 userInterface:(id)arg1 ;
-(id)shareShortcutEventForActivityType:(id)arg0 ;
-(void)generateItemURL;


@end


#endif