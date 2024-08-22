// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDEVELOPERINFOVIEW_H
#define SKUIDEVELOPERINFOVIEW_H

@class UIView, NSMutableArray;


#import "SKUIProductInformationView.h"
#import "SKUIClientContext.h"
#import "SKUIDeveloperInfo.h"

@interface SKUIDeveloperInfoView : UIView {
    UIView *_infoSeparatorView;
    SKUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // ivar: _developerInfo


-(id)initWithDeveloperInfo:(id)arg0 clientContext:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif