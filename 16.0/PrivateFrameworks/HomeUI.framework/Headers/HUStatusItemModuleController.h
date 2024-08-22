// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSTATUSITEMMODULECONTROLLER_H
#define HUSTATUSITEMMODULECONTROLLER_H



#import "HUItemModuleController.h"

@interface HUStatusItemModuleController : HUItemModuleController



+(id)_layoutOptionsForEnvironment:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_defaultCellLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)cellLayoutOptions;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif