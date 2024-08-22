// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMICOMPRESSIONHELPER_H
#define HMICOMPRESSIONHELPER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMICompressionHelper : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
-(char *)getDataOutWithSize:(NSUInteger)arg0 withFlag:(NSUInteger)arg1 fd:(*int)arg2 ;
-(int)unTarFileWithFd:(id)arg0 toPath:(id)arg1 ;
-(int)unpackageTarData:(*void)arg0 size:(NSUInteger)arg1 parentDir:(char *)arg2 ;
-(void)uncompressedContentsForCompressedFile:(id)arg0 outPath:(id)arg1 ;


@end


#endif