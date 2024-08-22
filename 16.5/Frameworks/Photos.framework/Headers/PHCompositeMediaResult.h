// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCOMPOSITEMEDIARESULT_H
#define PHCOMPOSITEMEDIARESULT_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}


@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isPlaceholder;


+(id)resultWithRequestID:(int)arg0 error:(id)arg1 ;
-(BOOL)canHandleAdjustmentData;
-(BOOL)containsValidData;
-(NSInteger)uiOrientation;
-(id)_sanitizedError;
-(id)adjustmentData;
-(id)allowedInfoKeys;
-(id)baseVersionNeeded;
-(id)cancelledInfoKey;
-(id)error;
-(id)errorInfoKey;
-(id)exifOrientation;
-(id)fingerPrint;
-(id)imageData;
-(id)imageProperties;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg0 ;
-(id)imageSandboxExtensionToken;
-(id)imageURL;
-(id)inCloudInfoKey;
-(id)info;
-(id)initWithRequestID:(int)arg0 ;
-(id)mediaMetadata;
-(id)sandboxExtensionToken;
-(id)sanitizedInfoDictionary;
-(id)uniformTypeIdentifier;
-(id)videoAdjustmentData;
-(id)videoMediaItemMakerData;
-(id)videoSandboxExtensionToken;
-(id)videoURL;
-(struct CGImage *)imageRef;
-(unsigned int)cgOrientation;
-(void)addInfoFromDictionary:(id)arg0 ;
-(void)clearError;
-(void)setError:(id)arg0 ;
-(void)setErrorIfNone:(id)arg0 ;
-(void)setInfo:(id)arg0 forKey:(id)arg1 ;
-(void)setSandboxExtensionToken:(id)arg0 ;


@end


#endif