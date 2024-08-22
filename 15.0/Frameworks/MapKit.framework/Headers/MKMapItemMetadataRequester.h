// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMAPITEMMETADATAREQUESTER_H
#define MKMAPITEMMETADATAREQUESTER_H

@class NSURLSession, NSMapTable, NSString;
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate>

 {
    NSURLSession *_session;
    NSMapTable *_requestsForURLs;
    NSMapTable *_tasksForURLs;
    NSMapTable *_dataForTasks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)cancelRequestsForMapItem:(id)arg0 ;
-(void)dealloc;
-(void)handleTask:(id)arg0 withData:(id)arg1 error:(id)arg2 ;
-(void)sendRequest:(id)arg0 ;


@end


#endif