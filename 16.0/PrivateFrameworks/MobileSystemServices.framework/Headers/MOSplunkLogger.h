// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSPLUNKLOGGER_H
#define MOSPLUNKLOGGER_H

@class NSURL, NSString, NSMutableArray, NSNumber;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MOSplunkLogger : NSObject <NSURLSessionDelegate>



@property (nonatomic) BOOL allowInvalidCert; // ivar: _allowInvalidCert
@property (retain, nonatomic) NSURL *configurationURL; // ivar: _configurationURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastSuccessfulConfigurationLoad; // ivar: _lastSuccessfulConfigurationLoad
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSNumber *samplingPercentage; // ivar: _samplingPercentage
@property (retain, nonatomic) NSString *splunkTopic; // ivar: _splunkTopic
@property (retain, nonatomic) NSURL *splunkUploadURL; // ivar: _splunkUploadURL
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *version; // ivar: _version


-(id)initWithName:(id)arg0 configurationURL:(id)arg1 splunkTopic:(id)arg2 version:(id)arg3 allowInvalidCert:(BOOL)arg4 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onQueue_loadConfiguration;
-(void)logEventNamed:(id)arg0 value:(id)arg1 ;
-(void)uploadEventsWithCompletion:(id)arg0 ;


@end


#endif