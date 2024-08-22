// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKENICONVIEW_H
#define PKMERCHANTTOKENICONVIEW_H

@class UIImageView, UILabel, UIImage, NSString;
@protocol PKLinkedApplicationObserver;


#import "PKLinkedApplication.h"

@interface PKMerchantTokenIconView : UIImageView <PKLinkedApplicationObserver>

 {
    PKLinkedApplication *_linkedApplication;
    UILabel *_monogramLabel;
    UIImage *_image;
    CGFloat _cornerRadius;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpConstraints;
-(void)_setUpMonogramLabel;
-(void)_setUpSelf;
-(void)_setUpViews;
-(void)_updateIconImage;
-(void)_updateLinkedApplicationWithAdamId:(id)arg0 ;
-(void)_updateMonogramLabelWithText:(id)arg0 ;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)updateWithAdamId:(id)arg0 monogramText:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(void)updateWithImage:(id)arg0 cornerRadius:(CGFloat)arg1 ;


@end


#endif