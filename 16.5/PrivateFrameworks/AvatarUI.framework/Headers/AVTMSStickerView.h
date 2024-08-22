// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTMSSTICKERVIEW_H
#define AVTMSSTICKERVIEW_H

@class MSStickerView, NSString;
@protocol UIGestureRecognizerDelegate, AVTMSStickerViewDelegate, AVTStickerDisclosureValidationDelegate;



@interface AVTMSStickerView : MSStickerView <UIGestureRecognizerDelegate>



@property (nonatomic) BOOL allowsPeel; // ivar: _allowsPeel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTMSStickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate; // ivar: _disclosureValidationDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_prepareForReuse;
-(void)handleLongPress:(id)arg0 ;
-(void)handleTap:(id)arg0 ;


@end


#endif