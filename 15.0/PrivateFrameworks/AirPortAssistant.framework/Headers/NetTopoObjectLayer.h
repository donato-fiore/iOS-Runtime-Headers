// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETTOPOOBJECTLAYER_H
#define NETTOPOOBJECTLAYER_H

@class CALayer, UIImage, NSString, NSTimer, NSMutableArray;


#import "BubbleTextLayer.h"
#import "TopoNumberBadge.h"
#import "TopoProgressBar.h"
#import "NetTopoObjectLayer.h"

@interface NetTopoObjectLayer : CALayer {
    int _topoStyle;
    CGSize _boundsSizeConstraint;
    UIImage *_statusBadgeImage;
    *CGColor _selectionColor;
    *CGColor _labelUnselectedFillColor;
    *CGColor _labelSelectedFillColor;
    *CGColor _labelSelectedFillColor2;
    *CGColor _labelUnselectedTextColor;
    *CGColor _labelSelectedTextColor;
    *CGColor _secondaryLabelUnselectedTextColor;
    *CGColor _secondaryLabelSelectedTextColor;
    CGRect _imageFrame;
    CGRect _imageCoreFrame;
    CGRect _imageSelectionFrame;
    CGFloat _selectionCornerRadius;
    CGFloat _selectionRectOutset;
    NSString *_labelString;
    BubbleTextLayer *_labelLayer;
    CGFloat _labelPinnedHeight;
    NSString *_secondaryLabelString;
    BubbleTextLayer *_secondaryLabelLayer;
    UIImage" _statusLights;
    NSTimer *_statusLightTimer;
    float _statusLightInterval;
    unsigned int _statusLightState;
    unsigned int _statusLightMode;
    TopoNumberBadge *_topoNumberBadge;
    TopoProgressBar *_topoProgressBar;
    float _topoProgressValue;
    NSString *_saveLable;
}


@property (nonatomic) NetTopoObjectLayer *ancestor; // ivar: _ancestor
@property (retain, nonatomic) id *associatedNode; // ivar: _associatedNode
@property (nonatomic) CGSize boundsSizeConstraint;
@property (nonatomic) CGFloat change; // ivar: _change
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (nonatomic) NSUInteger column; // ivar: _column
@property (nonatomic) NetTopoObjectLayer *contourThread; // ivar: _contourThread
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _isExpanded
@property (nonatomic, getter=isGhosted) BOOL ghosted; // ivar: _ghosted
@property (retain, nonatomic) NSString *label;
@property (nonatomic) CGFloat labelPinnedHeight;
@property (nonatomic) CGPoint layoutOrigin; // ivar: _layoutOrigin
@property (nonatomic) CGFloat layoutScale; // ivar: _layoutScale
@property (nonatomic) CGFloat mod; // ivar: _mod
@property (nonatomic) NSUInteger number; // ivar: _number
@property (readonly, nonatomic) NSUInteger numberOfChildren;
@property (retain, nonatomic) *CGImage objectImage; // ivar: _objectImage
@property (nonatomic) id *owningView; // ivar: _owningView
@property (retain, nonatomic) NetTopoObjectLayer *parent; // ivar: _parent
@property (readonly, nonatomic) NetTopoObjectLayer *parentDevice;
@property (nonatomic) CGFloat prelim; // ivar: _prelim
@property (nonatomic) NSUInteger row; // ivar: _row
@property (retain, nonatomic) NSString *saveLabel; // ivar: _saveLabel
@property (retain, nonatomic) NSString *secondaryLabel;
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) CGFloat shift; // ivar: _shift
@property (nonatomic) BOOL smallSize; // ivar: _smallSize
@property (retain, nonatomic) UIImage *statusBadgeImage;
@property (nonatomic) unsigned int statusLightMode;
@property (nonatomic) NSUInteger topoBadgeNumber; // ivar: _topoBadgeNumber
@property (nonatomic) float topoProgressValue;
@property (retain, nonatomic) id *userObject; // ivar: _userObject


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)describeOne:(id)arg0 uiLayer:(id)arg1 indent:(NSUInteger)arg2 ;
-(id)firstChild;
-(id)init;
-(id)initWithUIStyle:(int)arg0 andOwningView:(id)arg1 ;
-(id)lastChild;
-(struct ? )getConnectionAttachmentLocations;
-(struct CGRect )getFrameContainingAllSublayers;
-(struct CGRect )getUserInteractionBounds;
-(void)addChild:(id)arg0 ;
-(void)dealloc;
-(void)deallocStatusImages;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)initNetTopoObjectLayerCommonWithStyle:(int)arg0 andOwningView:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)layoutSublayers;
-(void)loadStatusImagesForScale:(CGFloat)arg0 ;
-(void)pickCorrectImagesForContentsScale:(CGFloat)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)setStatusLightStateFromMode;
-(void)statusLightUpdateTimer:(id)arg0 ;


@end


#endif