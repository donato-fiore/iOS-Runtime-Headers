// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGEPROVIDERPOOL_H
#define TSDIMAGEPROVIDERPOOL_H

@class TSUPointerKeyDictionary, NSString;
@protocol TSPDataCullingListener;

#import <Foundation/Foundation.h>


@interface TSDImageProviderPool : NSObject <TSPDataCullingListener>

 {
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    NSUInteger mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isValidImageData:(id)arg0 ;
+(Class)p_providerClassForData:(id)arg0 ;
+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedPool;
-(NSUInteger)p_providerLimitForFileDescriptorLimit:(NSUInteger)arg0 ;
-(NSUInteger)p_removeProvidersWithZeroInterest;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)p_providerForData:(id)arg0 temporary:(BOOL)arg1 shouldValidate:(BOOL)arg2 ;
-(id)providerForData:(id)arg0 shouldValidate:(BOOL)arg1 ;
-(id)retain;
-(id)temporaryProviderForData:(id)arg0 shouldValidate:(BOOL)arg1 ;
-(void)addInterestInProviderForData:(id)arg0 ;
-(void)dealloc;
-(void)flushImageProviders;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)p_freeFileDescriptorsWithProviderCount:(NSUInteger)arg0 ;
-(void)p_updateFileDescriptorLimit;
-(void)release;
-(void)removeInterestInProviderForData:(id)arg0 ;
-(void)willCloseDocumentContext:(id)arg0 ;
-(void)willCullData:(id)arg0 ;


@end


#endif