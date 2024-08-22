// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNETWORKIMAGECOMPONENTVIEW_H
#define CKNETWORKIMAGECOMPONENTVIEW_H

@class UIImageView;


#import "CKNetworkImageSpecifier.h"

@interface CKNetworkImageComponentView : UIImageView {
    BOOL _inReusePool;
    id *_download;
}


@property (retain, nonatomic) CKNetworkImageSpecifier *specifier; // ivar: _specifier


-(void)_startDownloadIfNotInReusePool;
-(void)dealloc;
-(void)didDownloadImage:(struct CGImage *)arg0 error:(id)arg1 ;
-(void)didEnterReusePool;
-(void)layoutSubviews;
-(void)updateContentsRect;
-(void)willLeaveReusePool;


@end


#endif