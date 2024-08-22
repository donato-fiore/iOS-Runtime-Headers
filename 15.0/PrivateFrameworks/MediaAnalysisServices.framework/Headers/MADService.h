// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADSERVICE_H
#define MADSERVICE_H

@class NSXPCConnection;
@protocol MADServiceProtocol, VCPMediaAnalysisClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MADService : NSObject <MADServiceProtocol, VCPMediaAnalysisClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    atomic<int> _requestID;
}




+(BOOL)isEntitled;
+(id)allowedClasses;
+(id)serverProtocol;
+(id)service;
+(id)serviceName;
+(void)configureServerInterface:(id)arg0 ;
-(?)renderCGImagetoCVPixelBuffer;
-(NSUInteger)currentOutstandingTasks;
-(id)connection;
-(id)init;
-(id)initInternal;
-(id)queryPerformanceMeasurements;
-(id)sandboxExtensionForURL:(id)arg0 error:(*id)arg1 ;
-(int)_performRequests:(id)arg0 onIOSurface:(id)arg1 withOrientation:(unsigned int)arg2 assetLocalIdentifier:(id)arg3 photoLibraryURL:(id)arg4 completionHandler:(id)arg5 ;
-(int)performRequests:(id)arg0 onAssetWithCloudIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(int)performRequests:(id)arg0 onAssetWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 completionHandler:(id)arg3 ;
-(int)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 withOrientation:(unsigned int)arg2 andIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(int)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 withOrientation:(unsigned int)arg2 assetLocalIdentifier:(id)arg3 photoLibraryURL:(id)arg4 completionHandler:(id)arg5 ;
-(int)performRequests:(id)arg0 onCIImage:(id)arg1 withOrientation:(unsigned int)arg2 andIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(int)performRequests:(id)arg0 onImageURL:(id)arg1 completionHandler:(id)arg2 ;
-(int)performRequests:(id)arg0 onImageURL:(id)arg1 withIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(int)performRequests:(id)arg0 onPixelBuffer:(struct __CVBuffer *)arg1 withOrientation:(unsigned int)arg2 andIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(int)performRequests:(id)arg0 onPixelBuffer:(struct __CVBuffer *)arg1 withOrientation:(unsigned int)arg2 assetLocalIdentifier:(id)arg3 photoLibraryURL:(id)arg4 completionHandler:(id)arg5 ;
-(int)performRequests:(id)arg0 onPixelBuffer:(struct __CVBuffer *)arg1 withOrientation:(unsigned int)arg2 completionHandler:(id)arg3 ;
-(void)cancelAllRequests;
-(void)cancelRequestID:(int)arg0 ;
-(void)dealloc;
-(void)endEntryPoint;
-(void)reportProgress:(CGFloat)arg0 forRequest:(int)arg1 ;
-(void)resetPerformanceMeasurements;
-(void)startEntryPointWithQueryID:(NSUInteger)arg0 ;


@end


#endif