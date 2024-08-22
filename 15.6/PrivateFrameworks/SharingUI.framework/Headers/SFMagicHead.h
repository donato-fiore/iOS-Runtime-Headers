// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFMAGICHEAD_H
#define SFMAGICHEAD_H

@class UIView, NSArray, SFAirDropNode, NSUUID, NSProgress, SFMagicHeadSettings, UIAirDropNode;
@protocol SFMagicHeadDelegate;


#import "SFMagicHeadShadowView.h"
#import "SFPersonImageView.h"
#import "SFCircleProgressView.h"

@interface SFMagicHead : UIView {
    CGFloat _containerRadius;
    UIView *_contentView;
    SFMagicHeadShadowView *_shadowView;
    SFPersonImageView *_imageView;
    SFCircleProgressView *_circleProgressView;
    NSArray *_progressKeyPaths;
    NSInteger _cellState;
    BOOL _isMagicHead;
}


@property (readonly) CGFloat degreeOffset; // ivar: _degreeOffset
@property (weak) NSObject<SFMagicHeadDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) UIView *imageSlotView; // ivar: _imageSlotView
@property (readonly) SFAirDropNode *node; // ivar: _node
@property (readonly, nonatomic) NSUUID *nodeIdentifier; // ivar: _nodeIdentifier
@property BOOL pointedAt; // ivar: _pointedAt
@property (nonatomic) NSInteger position; // ivar: _position
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) SFMagicHeadSettings *settings; // ivar: _settings
@property (nonatomic) NSInteger size; // ivar: _size
@property (readonly) UIAirDropNode *slotNode; // ivar: _slotNode
@property BOOL stateBeingRestored; // ivar: _stateBeingRestored


-(id)initWithNode:(id)arg0 slotNode:(id)arg1 containerRadius:(CGFloat)arg2 delegate:(id)arg3 settings:(id)arg4 ;
-(void)addObserverOfValuesForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)dealloc;
-(void)handleKVOUpdateForProgress:(id)arg0 keyPath:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserverOfValuesForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)resetTransferState;
-(void)setCellState:(NSInteger)arg0 animated:(BOOL)arg1 silent:(BOOL)arg2 ;
-(void)triggerKVOForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)userDidCancel;
-(void)userDidSelect;


@end


#endif