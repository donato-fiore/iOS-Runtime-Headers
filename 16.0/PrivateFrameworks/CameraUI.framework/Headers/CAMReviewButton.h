// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMREVIEWBUTTON_H
#define CAMREVIEWBUTTON_H

@class UIButton;



@interface CAMReviewButton : UIButton

@property (nonatomic, setter=_setNumberOfCaptures:) NSUInteger _numberOfCaptures; // ivar: __numberOfCaptures


+(id)_sharedNumberOfCapturesFormatter;
-(id)_localizedTitleForNumberOfCaptures;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonCAMReviewButtonInitialization;


@end


#endif