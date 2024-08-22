// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISICON_H
#define ISICON_H

@class NSString, NSArray, NSMutableDictionary, IFSymbol;
@protocol ISScalableCompositorResource, CALayerDelegate, ISIconIdentity;

#import <Foundation/Foundation.h>

#import "ISIconManager.h"

@interface ISIcon : NSObject <ISScalableCompositorResource, CALayerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSObject<ISIconIdentity> *_identity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *decorations;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) ISIconManager *manager;
@property (retain) NSMutableDictionary *prepareISIconDigestToSignpostIDs; // ivar: prepareISIconDigestToSignpostIDs
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IFSymbol *symbol;


+(BOOL)variant:(int)arg0 isMemberOfSet:(NSUInteger)arg1 ;
+(BOOL)writeCustomIcon:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)behaviourRevision;
+(char *)_AttachedResourceInfoKey;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)applicationIcon;
+(id)genericApplicationIcon;
+(id)genericDocumentIcon;
+(id)layerUpdateQueue;
+(id)sizesFromSet:(NSUInteger)arg0 ;
+(id)templateTypeForTag:(id)arg0 tagClass:(id)arg1 ;
+(id)templateTypeForType:(id)arg0 ;
+(id)transparentIcon;
+(int)findVariantFromSet:(NSUInteger)arg0 deviceIdiom:(NSUInteger)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
+(struct _LIIconVariantInfo *)variantInfoForSet:(NSUInteger)arg0 count:(*NSUInteger)arg1 ;
-(CGFloat)_aspectRatio;
-(NSUInteger)badgeOptions;
-(NSUInteger)variantOptions;
-(id)_beginPrepareISIconSignpost:(id)arg0 funcName:(char *)arg1 ;
-(id)_imageForSymbolImageDescriptor:(id)arg0 ;
-(id)_init;
-(id)_prepareImageForImageDescriptor:(id)arg0 ;
-(id)iconWithDecorations:(id)arg0 ;
-(id)imageForDescriptor:(id)arg0 ;
-(id)imageForImageDescriptor:(id)arg0 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)prepareImageForDescriptor:(id)arg0 ;
-(struct CGImage *)CGImageForDescriptor:(id)arg0 ;
-(struct CGImage *)CGImageForImageDescriptor:(id)arg0 ;
-(void)_endPrepareISIconSignpost:(id)arg0 ;
-(void)_eventPrepareISIconSignpost:(id)arg0 message:(id)arg1 ;
-(void)_prepareImagesForImageDescriptors:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)getCGImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)prepareImagesForDescriptors:(id)arg0 ;
-(void)prepareImagesForImageDescriptors:(id)arg0 ;


@end


#endif