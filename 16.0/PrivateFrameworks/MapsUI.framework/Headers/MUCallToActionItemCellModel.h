// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCALLTOACTIONITEMCELLMODEL_H
#define MUCALLTOACTIONITEMCELLMODEL_H

@class MKUGCCallToActionViewAppearance, NSString, UIMenu;
@protocol MUDynamicButtonCellModel, MUDynamicButtonCellModelChangeDelegate;

#import <Foundation/Foundation.h>


@interface MUCallToActionItemCellModel : NSObject <MUDynamicButtonCellModel>



@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) NSInteger actionStyle;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *appearance; // ivar: _appearance
@property (weak, nonatomic) NSObject<MUDynamicButtonCellModelChangeDelegate> *changeDelegate; // ivar: _changeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;


+(id)passiveAddPhotosCallToActionAppearance;
+(id)passiveRatingsCallToActionAppearance;
-(id)accessibilityIdentifierForAction;
-(id)initWithCallToActionViewAppearance:(id)arg0 ;
-(void)loadSubtitleWithCompletion:(id)arg0 ;


@end


#endif