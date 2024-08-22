// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUMOMENTSCONTROLLER_H
#define TUMOMENTSCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol TUMomentsControllerDataSourceDelegate, TUMomentsControllerDataSource, TUMomentsControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate>



@property (readonly, nonatomic) NSMutableDictionary *capabilitiesByVideoStreamToken; // ivar: _capabilitiesByVideoStreamToken
@property (readonly, nonatomic) NSObject<TUMomentsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TUMomentsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *providerByVideoStreamToken; // ivar: _providerByVideoStreamToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)isFaceTimePhotosEnabled;
+(BOOL)isFaceTimePhotosEnabledByDefault;
+(BOOL)isFaceTimePhotosRestricted;
+(BOOL)isFaceTimePhotosXPCServiceEnabled;
+(BOOL)isInternalInstall;
+(id)faceTimePhotosEnabledDeterminer:(SEL)arg0 ;
+(void)setFaceTimePhotosEnabled:(BOOL)arg0 ;
+(void)setFaceTimePhotosEnabledDeterminer:(id)arg0 ;
-(id)capabilitiesForProvider:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 ;
-(void)dataSource:(id)arg0 didReceiveLocallyRequestedMomentDescriptor:(id)arg1 ;
-(void)dataSource:(id)arg0 didUpdateCapabilities:(id)arg1 forVideoStreamToken:(NSInteger)arg2 ;
-(void)dataSource:(id)arg0 requestSandboxExtensionForURL:(id)arg1 reply:(id)arg2 ;
-(void)dataSource:(id)arg0 willCaptureRemoteRequestFromRequesterID:(id)arg1 ;
-(void)dealloc;
-(void)endRequestWithTransactionID:(id)arg0 completion:(id)arg1 ;
-(void)registerProvider:(id)arg0 completion:(id)arg1 ;
-(void)serverDiedForDataSource:(id)arg0 ;
-(void)startRequestWithMediaType:(int)arg0 forProvider:(id)arg1 requesteeID:(id)arg2 completion:(id)arg3 ;
-(void)unregisterProvider:(id)arg0 completion:(id)arg1 ;


@end


#endif