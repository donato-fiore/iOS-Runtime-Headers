// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISETTINGDESCRIPTION_H
#define SKUISETTINGDESCRIPTION_H


#import <Foundation/Foundation.h>

#import "SKUISettingsGroupDescription.h"
#import "SKUIViewElement.h"

@interface SKUISettingDescription : NSObject {
    BOOL _editsValid;
}


@property (readonly, nonatomic) BOOL allowsSelection;
@property (readonly, nonatomic) BOOL editsValid;
@property (weak, nonatomic) SKUISettingsGroupDescription *parent; // ivar: _parent
@property (retain, nonatomic) SKUIViewElement *viewElement; // ivar: _viewElement


+(BOOL)allowsEdit;
+(Class)_viewClassForSettingDescription:(id)arg0 ;
+(Class)viewClassForSettingDescription:(id)arg0 ;
-(BOOL)_initiallyHidden;
-(BOOL)_isHidden;
-(BOOL)commitEdits:(id)arg0 ;
-(id)indexPath;
-(id)initWithViewElement:(id)arg0 parent:(id)arg1 ;
-(void)_deleteSetting;
-(void)_dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dispatchUpdate:(id)arg0 ;
-(void)_hideSetting;
-(void)_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_reloadSetting;
-(void)_revealSetting;
-(void)beginEditing;
-(void)cancelEdits;
-(void)discardEdits;
-(void)handleSelectionOnCompletion:(id)arg0 ;
-(void)reloadData;
-(void)reloadWithViewElement:(id)arg0 parent:(id)arg1 ;


@end


#endif