// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUITEMMODULECONTROLLER_H
#define HUITEMMODULECONTROLLER_H

@class NSString, HFItemModule;
@protocol HUItemTextEditingController, HUItemModuleControllerHosting;

#import <Foundation/Foundation.h>


@interface HUItemModuleController : NSObject <HUItemTextEditingController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUItemModuleControllerHosting> *host; // ivar: _host
@property (nonatomic) NSUInteger hostType; // ivar: _hostType
@property (readonly, nonatomic) HFItemModule *module; // ivar: _module
@property (readonly) Class superclass;


-(BOOL)canSelectDisabledItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 ;
-(BOOL)shouldHideFooterBelowSectionWithIdentifier:(id)arg0 ;
-(BOOL)shouldHideHeaderAboveSectionWithIdentifier:(id)arg0 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSInteger)rowAnimationForOperationType:(NSUInteger)arg0 item:(id)arg1 suggestedAnimation:(NSInteger)arg2 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)asGeneric;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithModule:(id)arg0 ;
-(id)leadingSwipeActionsForItem:(id)arg0 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)textFieldForVisibleItem:(id)arg0 ;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)accessoryButtonTappedForItem:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif