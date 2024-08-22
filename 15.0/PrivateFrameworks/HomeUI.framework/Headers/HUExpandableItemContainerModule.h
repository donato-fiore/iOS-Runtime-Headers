// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUEXPANDABLEITEMCONTAINERMODULE_H
#define HUEXPANDABLEITEMCONTAINERMODULE_H

@class HFItemModule, NSArray;



@interface HUExpandableItemContainerModule : HFItemModule

@property (readonly, nonatomic) NSArray *expandableModules;


-(BOOL)isOptionItem:(id)arg0 ;
-(BOOL)isShowOptionsItem:(id)arg0 ;
-(BOOL)shouldExpandModuleForShowOptionsItem:(id)arg0 ;
-(id)expandableModuleForItem:(id)arg0 ;
-(void)setModuleExpanded:(BOOL)arg0 forItem:(id)arg1 ;


@end


#endif