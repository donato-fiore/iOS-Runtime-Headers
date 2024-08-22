// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUCALLTOACTIONITEMCELLMODEL_H
#define MUCALLTOACTIONITEMCELLMODEL_H

@class MKUGCCallToActionViewAppearance, NSString;
@protocol MUDynamicButtonCellModel, MUDynamicButtonCellModelChangeDelegate;

#import <Foundation/Foundation.h>


@interface MUCallToActionItemCellModel : NSObject <MUDynamicButtonCellModel>

 {
    MKUGCCallToActionViewAppearance *_appearance;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (weak, nonatomic) NSObject<MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;


+(id)passiveAddPhotosCallToActionAppearance;
+(id)passiveRatingsCallToActionAppearance;
-(id)initWithCallToActionViewAppearance:(id)arg0 ;
-(void)loadSubtitleWithCompletion:(id)arg0 ;


@end


#endif