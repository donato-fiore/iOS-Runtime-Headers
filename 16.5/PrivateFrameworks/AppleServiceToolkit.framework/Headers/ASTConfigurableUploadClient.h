// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTCONFIGURABLEUPLOADCLIENT_H
#define ASTCONFIGURABLEUPLOADCLIENT_H

@class NSString, NSMutableDictionary, NSArray, NSURLSession;
@protocol NSURLSessionTaskDelegate, ASTUploadClient, ASTUploadClientDelegate, NSURLRequestFactory;

#import <Foundation/Foundation.h>

#import "ASTSession.h"

@interface ASTConfigurableUploadClient : NSObject <NSURLSessionTaskDelegate, ASTUploadClient>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ASTUploadClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) ASTSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskMap; // ivar: _taskMap
@property (readonly, nonatomic) NSArray *uploadStatus;
@property (retain, nonatomic) NSObject<NSURLRequestFactory> *urlFactory; // ivar: _urlFactory
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


-(NSUInteger)queueUploadWithSourceData:(id)arg0 andExtra:(id)arg1 ;
-(NSUInteger)queueUploadWithSourceUrl:(id)arg0 andExtra:(id)arg1 ;
-(NSUInteger)uploadWithObject:(id)arg0 andExtra:(id)arg1 ;
-(id)initWithASTSession:(id)arg0 withDelegate:(id)arg1 ;
-(id)initWithASTSession:(id)arg0 withURLSession:(id)arg1 withURLRequestFactory:(id)arg2 withDelegate:(id)arg3 ;
-(id)initWithURLSession:(id)arg0 withURLRequestFactory:(id)arg1 withDelegate:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)cancelAll;
-(void)cancelUploadWithId:(NSUInteger)arg0 ;
-(void)uploadTaskDidComplete:(NSUInteger)arg0 withResponse:(id)arg1 andError:(id)arg2 ;


@end


#endif