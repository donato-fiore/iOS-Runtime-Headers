// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITSCREENSHOTMANAGER_H
#define AXAUDITSCREENSHOTMANAGER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditScreenshotManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_borderFrame; // ivar: __borderFrame
@property (retain, nonatomic) NSMutableDictionary *_displayBounds; // ivar: __displayBounds
@property (retain, nonatomic) NSMutableDictionary *_image; // ivar: __image
@property (retain, nonatomic) NSMutableDictionary *_rotation; // ivar: __rotation
@property (retain, nonatomic) NSMutableDictionary *_scaleFactor; // ivar: __scaleFactor
@property (retain, nonatomic) NSMutableDictionary *_shouldFlipOutline; // ivar: __shouldFlipOutline
@property (retain, nonatomic) NSString *lastTimestamp; // ivar: _lastTimestamp


+(id)imageFromRemoteImageData:(id)arg0 rotation:(CGFloat)arg1 ;
+(id)imageProcessingQueue;
+(id)sharedManager;
-(BOOL)screenshotShouldFlipOutlineForTimestamp:(id)arg0 ;
-(CGFloat)screenshotRotationForTimestamp:(id)arg0 ;
-(CGFloat)screenshotScaleFactorForTimestamp:(id)arg0 ;
-(id)init;
-(id)screenshotForIssue:(id)arg0 elementRect:(struct CGRect *)arg1 ;
-(id)screenshotHighlightingIssue:(id)arg0 ;
-(id)screenshotImageForTimestamp:(id)arg0 ;
-(id)screenshotImageForTimestamp:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)thumbnailImageOfIssue:(id)arg0 ;
-(struct CGRect )_boundsForRect:(struct CGRect )arg0 containerImageSize:(struct CGSize )arg1 timestamp:(id)arg2 ;
-(struct CGRect )_elementBoundsForIssue:(id)arg0 containerImageSize:(struct CGSize )arg1 ;
-(struct CGRect )elementBoundsInScreenShotForIssue:(id)arg0 ;
-(struct CGRect )screenshotBorderFrameForTimestamp:(id)arg0 ;
-(struct CGRect )screenshotDisplayBoundsForTimestamp:(id)arg0 ;
-(void)addScreenshot:(id)arg0 forTimestamp:(id)arg1 ;
-(void)addScreenshotWithInfo:(id)arg0 timestamp:(id)arg1 completion:(id)arg2 ;
-(void)clear;
-(void)setScreenshotBorderFrame:(struct CGRect )arg0 forTimestamp:(id)arg1 ;
-(void)setScreenshotDisplayBounds:(struct CGRect )arg0 forTimestamp:(id)arg1 ;
-(void)setScreenshotRotation:(CGFloat)arg0 forTimestamp:(id)arg1 ;
-(void)setScreenshotScaleFactor:(CGFloat)arg0 forTimestamp:(id)arg1 ;
-(void)setScreenshotShouldFlipOutline:(BOOL)arg0 forTimestamp:(id)arg1 ;


@end


#endif