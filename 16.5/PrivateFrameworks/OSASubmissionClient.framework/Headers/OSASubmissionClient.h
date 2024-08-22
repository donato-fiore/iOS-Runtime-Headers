// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSASUBMISSIONCLIENT_H
#define OSASUBMISSIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol OSASubmissionServices;

#import <Foundation/Foundation.h>


@interface OSASubmissionClient : NSObject <OSASubmissionServices>

 {
    NSXPCConnection *_connection;
    id<OSASubmissionServices> *_synchRemoteObjectProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)submit;
-(BOOL)submitWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)submitWithOptions:(id)arg0 resultsCallback:(id)arg1 ;


@end


#endif