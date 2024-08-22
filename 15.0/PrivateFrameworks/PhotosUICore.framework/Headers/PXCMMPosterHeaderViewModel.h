// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMPOSTERHEADERVIEWMODEL_H
#define PXCMMPOSTERHEADERVIEWMODEL_H

@class NSString;
@protocol PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"

@interface PXCMMPosterHeaderViewModel : PXObservable

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) BOOL showStatusCheckmark; // ivar: _showStatusCheckmark
@property (readonly, copy, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif