// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISETTINGSDOCUMENTVIEW_H
#define SKUISETTINGSDOCUMENTVIEW_H

@class UIView;
@protocol SKUISettingsDocumentViewDelegate;



@interface SKUISettingsDocumentView : UIView

@property (weak, nonatomic) NSObject<SKUISettingsDocumentViewDelegate> *delegate; // ivar: _delegate


-(void)tintColorDidChange;


@end


#endif