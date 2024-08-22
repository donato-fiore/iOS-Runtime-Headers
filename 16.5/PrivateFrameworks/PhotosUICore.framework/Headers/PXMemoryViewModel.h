// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORYVIEWMODEL_H
#define PXMEMORYVIEWMODEL_H

@class NSString;
@protocol PXMutableMemoryViewModel, PXDisplayAsset;


#import "PXObservable.h"

@interface PXMemoryViewModel : PXObservable <PXMutableMemoryViewModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHighlighted; // ivar: _isHighlighted
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) NSString *localizedDateText; // ivar: _localizedDateText
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSInteger specSet; // ivar: _specSet
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif