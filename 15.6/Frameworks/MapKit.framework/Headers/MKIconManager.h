// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKICONMANAGER_H
#define MKICONMANAGER_H


#import <Foundation/Foundation.h>


@interface MKIconManager : NSObject



+(id)_imageForFeatureStyleAttributes:(id)arg0 iconText:(id)arg1 size:(NSUInteger)arg2 forScale:(CGFloat)arg3 navMode:(BOOL)arg4 nightMode:(BOOL)arg5 ;
+(id)_imageForFeatureStyleAttributes:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 ;
+(id)_imageForFeatureStyleAttributes:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 navMode:(BOOL)arg3 ;
+(id)_imageForFeatureStyleAttributes:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 navMode:(BOOL)arg3 nightMode:(BOOL)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 nightMode:(BOOL)arg3 ;
+(id)iconManager;
+(id)imageForIconID:(unsigned int)arg0 contentScale:(CGFloat)arg1 sizeGroup:(NSUInteger)arg2 nightMode:(BOOL)arg3 ;
+(id)imageForMapItem:(id)arg0 forScale:(CGFloat)arg1 ;
+(id)imageForMapItem:(id)arg0 forScale:(CGFloat)arg1 fallbackToBundleIcon:(BOOL)arg2 ;
+(id)imageForMapItem:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 ;
+(id)imageForMapItem:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 fallbackToBundleIcon:(BOOL)arg4 ;
+(id)imageForRouteAnnotationStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 nightMode:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 nightMode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 interactive:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 interactive:(BOOL)arg8 isCarplay:(BOOL)arg9 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 interactive:(BOOL)arg8 isCarplay:(BOOL)arg9 nightMode:(BOOL)arg10 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 interactive:(BOOL)arg8 nightMode:(BOOL)arg9 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 fallbackToBundleIcon:(BOOL)arg5 transparent:(BOOL)arg6 transitmode:(BOOL)arg7 nightMode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 customIconID:(NSUInteger)arg4 nightMode:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 nightMode:(BOOL)arg4 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 nightMode:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 interactive:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 interactive:(BOOL)arg6 nightMode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 isCarplay:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 isCarplay:(BOOL)arg6 nightMode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 format:(int)arg3 transparent:(BOOL)arg4 transitMode:(BOOL)arg5 nightMode:(BOOL)arg6 ;
+(id)imageForTrafficCamera:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 ;
+(id)imageForTrafficCamera:(id)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 nightMode:(BOOL)arg3 ;
+(id)imageForTrafficIncidentType:(NSInteger)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 ;
+(id)imageForTrafficIncidentType:(NSInteger)arg0 size:(NSUInteger)arg1 forScale:(CGFloat)arg2 nightMode:(BOOL)arg3 ;
+(struct CGColor *)newFillColorForStyleAttributes:(id)arg0 forScale:(CGFloat)arg1 ;
+(struct CGColor *)newGlyphColorForStyleAttributes:(id)arg0 forScale:(CGFloat)arg1 ;
+(struct CGColor *)newHaloColorForStyleAttributes:(id)arg0 forScale:(CGFloat)arg1 ;
+(void)requestImageForStyleAttributes:(id)arg0 size:(NSUInteger)arg1 scale:(CGFloat)arg2 completionHandler:(id)arg3 ;
+(void)setDiskCacheURL:(id)arg0 ;


@end


#endif