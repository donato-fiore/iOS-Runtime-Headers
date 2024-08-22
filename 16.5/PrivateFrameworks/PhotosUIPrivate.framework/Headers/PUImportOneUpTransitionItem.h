// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTONEUPTRANSITIONITEM_H
#define PUIMPORTONEUPTRANSITIONITEM_H

@class PXImportItemViewModel, UIImage, UIView;

#import <Foundation/Foundation.h>


@interface PUImportOneUpTransitionItem : NSObject

@property (readonly, nonatomic) PXImportItemViewModel *importItem; // ivar: _importItem
@property (readonly, nonatomic) PXSimpleIndexPath indexPath; // ivar: _indexPath
@property (nonatomic) CGFloat initialContentAlpha; // ivar: _initialContentAlpha
@property (nonatomic) CGRect initialFrame; // ivar: _initialFrame
@property (retain, nonatomic) UIImage *snapshotImage; // ivar: _snapshotImage
@property (nonatomic) CGFloat targetContentAlpha; // ivar: _targetContentAlpha
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame
@property (retain, nonatomic) UIView *transitionView; // ivar: _transitionView


-(id)initWithInitialFrame:(struct CGRect )arg0 snapshotImage:(id)arg1 importItem:(id)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;


@end


#endif