// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEENRICHMENTCONTEXTMENU_H
#define MUPLACEENRICHMENTCONTEXTMENU_H

@class UIControl;
@protocol MUPlaceEnrichmentSectionContextMenuDelegate, MUPlaceEnrichmentActionHandler;


#import "MUPlaceEnrichmentAction.h"

@interface MUPlaceEnrichmentContextMenu : UIControl

@property (retain, nonatomic) MUPlaceEnrichmentAction *contextMenuAction; // ivar: _contextMenuAction
@property (weak, nonatomic) NSObject<MUPlaceEnrichmentSectionContextMenuDelegate> *contextMenuDelegate; // ivar: _contextMenuDelegate
@property (weak, nonatomic) NSObject<MUPlaceEnrichmentActionHandler> *enrichmentActionDelegate; // ivar: _enrichmentActionDelegate


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif