// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IKJSINSPECTORSYNCHRONOUSNETWORKREQUESTRECORD_H
#define _IKJSINSPECTORSYNCHRONOUSNETWORKREQUESTRECORD_H

@class NSDate, NSURLRequest, NSURLResponse, NSString, NSData, NSDictionary;
@protocol IKNetworkRequestRecord;

#import <Foundation/Foundation.h>

#import "_IKJSInspectorNetworkLoader.h"

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord>

 {
    NSDate *_redirectEndTime;
    BOOL _isRedirecting;
    NSDate *_startTime;
}


@property (copy, nonatomic, getter=urlRequest) NSURLRequest *URLRequest; // ivar: _URLRequest
@property (copy, nonatomic, getter=urlResponse) NSURLResponse *URLResponse; // ivar: _URLResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger initiatorType; // ivar: _initiatorType
@property (weak, nonatomic) _IKJSInspectorNetworkLoader *loader; // ivar: _loader
@property (readonly, nonatomic) NSInteger resourceType; // ivar: _resourceType
@property (copy, nonatomic) NSData *responseBodyData; // ivar: _responseBodyData
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *timingData; // ivar: _timingData


+(NSInteger)_protocolResourceTypeForType:(NSInteger)arg0 ;
+(NSInteger)_responseSourceTypeForCacheType:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 loader:(id)arg1 resourceType:(NSInteger)arg2 initiatorType:(NSInteger)arg3 ;
-(void)_didCompleteLoadingFromCache:(NSInteger)arg0 mimeType:(id)arg1 withResponseBody:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)_dispatchEvent:(NSInteger)arg0 block:(id)arg1 ;
-(void)_processEventType:(NSInteger)arg0 ;
-(void)didCompleteLoadingFromCache:(NSInteger)arg0 mimeType:(id)arg1 withResponseBody:(id)arg2 ;
-(void)didCompleteLoadingFromCache:(NSInteger)arg0 withResponseBody:(id)arg1 mimeType:(id)arg2 ;
-(void)didCompleteLoadingFromCache:(NSInteger)arg0 withResponseBodyBlock:(id)arg1 ;
-(void)didCompleteLoadingFromMemoryWithRequest:(id)arg0 response:(id)arg1 withResponseBodyBlock:(id)arg2 ;
-(void)didCompleteLoadingWithResponseBody:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveData:(id)arg0 ;
-(void)didReceiveResponse:(id)arg0 timingData:(id)arg1 ;
-(void)willSendRequest:(id)arg0 ;
-(void)willSendRequest:(id)arg0 redirectResponse:(id)arg1 ;


@end


#endif