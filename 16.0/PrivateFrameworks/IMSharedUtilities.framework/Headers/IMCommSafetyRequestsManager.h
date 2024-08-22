// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOMMSAFETYREQUESTSMANAGER_H
#define IMCOMMSAFETYREQUESTSMANAGER_H

@class NSMutableDictionary, MADService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMCommSafetyRequestsManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (retain, nonatomic) NSMutableDictionary *cachedResults; // ivar: _cachedResults
@property (retain, nonatomic) MADService *service; // ivar: _service


+(id)sharedManager;
+(void)initialize;
-(id)_identifierForURL:(id)arg0 withChatID:(id)arg1 ;
-(id)cachedResultForImage:(id)arg0 withChatID:(id)arg1 ;
-(id)init;
-(void)_dispatchMADProcessingRequest:(id)arg0 withChatID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setSensitiveValue:(BOOL)arg0 forIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)isSensitiveCGImage:(struct CGImage *)arg0 withOrientation:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)isSensitiveImage:(id)arg0 withChatID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif