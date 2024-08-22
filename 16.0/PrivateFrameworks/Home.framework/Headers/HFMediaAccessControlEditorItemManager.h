// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAACCESSCONTROLEDITORITEMMANAGER_H
#define HFMEDIAACCESSCONTROLEDITORITEMMANAGER_H



#import "HFItemManager.h"
#import "HFMediaAccessControlEditorItemModule.h"

@interface HFMediaAccessControlEditorItemManager : HFItemManager

@property (readonly, nonatomic) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule; // ivar: _accessControlEditorItemModule


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 home:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif