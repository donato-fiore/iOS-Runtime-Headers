// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CABACKDROPLAYER_H
#define CABACKDROPLAYER_H

@class NSString;
@protocol CABackdropLayerDelegate><CALayerDelegate;


#import "CALayer.h"

@interface CABackdropLayer : CALayer

@property BOOL allowsInPlaceFiltering;
@property CGRect backdropRect;
@property BOOL captureOnly;
@property (weak) NSObject<CABackdropLayerDelegate><CALayerDelegate> *delegate;
@property BOOL disablesOccludedBackdropBlurs; // ivar: _disablesOccludedBackdropBlurs
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property (copy) NSString *groupNamespace;
@property BOOL ignoresScreenClip;
@property CGFloat marginWidth;
@property BOOL reducesCaptureBitDepth;
@property CGFloat scale;
@property BOOL tracksLuma;
@property BOOL usesGlobalGroupNamespace;
@property CGFloat zoom;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif