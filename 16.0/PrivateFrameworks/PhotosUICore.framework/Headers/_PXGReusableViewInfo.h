// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXGREUSABLEVIEWINFO_H
#define _PXGREUSABLEVIEWINFO_H

@class NSMutableArray, NSArray, CALayer;
@protocol PXGInternalReusableView;

#import <Foundation/Foundation.h>

#import "_PXGReusableViewInfo.h"

@interface _PXGReusableViewInfo : NSObject {
    NSMutableArray *_hostedViewInfos;
}


@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, nonatomic) NSArray *hostedViewInfos;
@property (weak, nonatomic) _PXGReusableViewInfo *hostingViewInfo; // ivar: _hostingViewInfo
@property (retain, nonatomic) CALayer *layer; // ivar: _layer
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) NSObject<PXGInternalReusableView> *view; // ivar: _view


-(id)description;
-(id)initWithReusableView:(id)arg0 ;
-(void)addHostedViewInfo:(id)arg0 ;
-(void)removeFromSuperViewInfo;


@end


#endif