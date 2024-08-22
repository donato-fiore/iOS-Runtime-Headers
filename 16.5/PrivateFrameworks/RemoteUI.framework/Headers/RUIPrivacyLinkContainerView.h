// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIPRIVACYLINKCONTAINERVIEW_H
#define RUIPRIVACYLINKCONTAINERVIEW_H

@class UIView, NSDictionary, NSString, OBPrivacyLinkController;
@protocol RemoteUITableFooter;



@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>

 {
    NSDictionary *_attributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) OBPrivacyLinkController *linkController; // ivar: _linkController
@property (readonly) Class superclass;


-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(void)configureInPage:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif