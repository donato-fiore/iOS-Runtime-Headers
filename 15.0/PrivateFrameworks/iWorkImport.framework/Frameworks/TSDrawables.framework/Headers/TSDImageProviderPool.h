// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGEPROVIDERPOOL_H
#define TSDIMAGEPROVIDERPOOL_H

@class NSMapTable, NSString;
@protocol TSPDataCullingListener;

#import <Foundation/Foundation.h>


@interface TSDImageProviderPool : NSObject <TSPDataCullingListener>

 {
    NSMapTable *mImageDataUniqueIdentifierToImageProviderMap;
    NSUInteger mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)p_providerClassForData:(id)arg0 ;
+(id)sharedPool;
-(BOOL)isBitmapData:(id)arg0 ;
-(BOOL)p_rngSaysToFlush;
-(NSUInteger)p_estimatedSizeOfAllProviders;
-(NSUInteger)p_imageProviderMemoryThreshold;
-(NSUInteger)p_providerLimitForFileDescriptorLimit:(NSUInteger)arg0 ;
-(NSUInteger)p_removeProvidersWithZeroInterest;
-(id)init;
-(id)p_providerForData:(id)arg0 temporary:(BOOL)arg1 shouldValidate:(BOOL)arg2 ;
-(id)providerForData:(id)arg0 shouldValidate:(BOOL)arg1 ;
-(id)temporaryProviderForData:(id)arg0 shouldValidate:(BOOL)arg1 ;
-(void)addInterestInProviderForData:(id)arg0 ;
-(void)dealloc;
-(void)didReplaceContentsOfDataWithUniqueIdentifier:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)flushImageProviders;
-(void)flushProvidersToFreeMemoryIfNecessaryExcludingProvider:(id)arg0 ;
-(void)p_applicationDidEnterBackground:(id)arg0 ;
-(void)p_clearCacheForDataUniqueIdentifier:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)p_flushProvidersWithNoOneActivelyHoldingAReference;
-(void)p_flushRandomImageProvidersExcludingProvider:(id)arg0 ;
-(void)p_freeFileDescriptorsWithProviderCount:(NSUInteger)arg0 ;
-(void)p_updateFileDescriptorLimit;
-(void)removeInterestInProviderForData:(id)arg0 ;
-(void)willCloseDocumentContext:(id)arg0 ;
-(void)willCullDataWithUniqueIdentifier:(id)arg0 flags:(NSUInteger)arg1 ;


@end


#endif