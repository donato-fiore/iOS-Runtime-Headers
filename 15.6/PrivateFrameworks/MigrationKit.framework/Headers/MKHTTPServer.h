// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKHTTPSERVER_H
#define MKHTTPSERVER_H

@class NSMutableDictionary, NSString;
@protocol MKListenerDelegate, MKHTTPServerDelegate;

#import <Foundation/Foundation.h>

#import "MKListener.h"
#import "MKHTTPParser.h"
#import "MKCertificate.h"

@interface MKHTTPServer : NSObject <MKListenerDelegate>

 {
    MKListener *_listener;
    MKHTTPParser *_parser;
    NSMutableDictionary *_requests;
    NSMutableDictionary *_routers;
}


@property (retain, nonatomic) MKCertificate *certificate; // ivar: _certificate
@property (retain, nonatomic) MKCertificate *clientCertificate; // ivar: _clientCertificate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKHTTPServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger port; // ivar: _port
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (nonatomic) BOOL useHTTPS; // ivar: _useHTTPS


-(id)init;
-(id)method:(NSUInteger)arg0 ;
-(id)routerForMethod:(id)arg0 path:(id)arg1 ;
-(void)addRouter:(id)arg0 method:(NSUInteger)arg1 path:(id)arg2 ;
-(void)cancel;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)listener:(id)arg0 didOpen:(NSInteger)arg1 ;
-(void)listenerDidCancel:(id)arg0 ;
-(void)run;


@end


#endif