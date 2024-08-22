// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSTATICPHOTOSTACKBALLOONVIEW_H
#define CKSTATICPHOTOSTACKBALLOONVIEW_H

@class NSArray;


#import "CKBalloonView.h"
#import "CKStaticImageStackView.h"

@interface CKStaticPhotoStackBalloonView : CKBalloonView

@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (retain, nonatomic) CKStaticImageStackView *stackView; // ivar: _stackView


-(CGFloat)stackCornerRadius;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif