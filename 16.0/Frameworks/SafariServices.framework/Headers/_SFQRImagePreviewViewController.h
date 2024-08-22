// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFQRIMAGEPREVIEWVIEWCONTROLLER_H
#define _SFQRIMAGEPREVIEWVIEWCONTROLLER_H

@class UIViewController, UIImageView, _WKActivatedElementInfo;
@protocol BCSAction;



@interface _SFQRImagePreviewViewController : UIViewController {
    UIImageView *_imageView;
    _WKActivatedElementInfo *_activatedElementInfo;
}


@property (readonly, nonatomic) NSObject<BCSAction> *action;


-(id)_contentViewSubtitleWithAction:(id)arg0 ;
-(id)initWithElementInfo:(id)arg0 ;
-(void)loadView;


@end


#endif