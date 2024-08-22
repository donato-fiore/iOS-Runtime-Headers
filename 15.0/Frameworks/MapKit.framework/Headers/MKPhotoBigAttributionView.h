// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPHOTOBIGATTRIBUTIONVIEW_H
#define MKPHOTOBIGATTRIBUTIONVIEW_H

@class UIView, UIImageView, NSString, UIActivityIndicatorView;
@protocol MKPhotoBigAttributionViewSubclass, MKActivityObserving;


#import "MKMapItem.h"

@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass, MKActivityObserving>

 {
    UIImageView *_imageView;
    UIView *_backgroundView;
    BOOL _needsImageLoad;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)bigAttributionViewForMapItem:(id)arg0 attributionType:(NSInteger)arg1 isFirstParty:(BOOL)arg2 context:(NSInteger)arg3 ;
-(id)initWithContext:(NSInteger)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)didEndAnimatingActivityIndicatorView;
-(void)didUpdateAttributionViewType;
-(void)didUpdateMapItem;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateBackgroundIfNeeded;
-(void)willStartAnimatingActivityIndicatorView;


@end


#endif