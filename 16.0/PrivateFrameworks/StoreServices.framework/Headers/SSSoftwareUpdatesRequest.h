// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSOFTWAREUPDATESREQUEST_H
#define SSSOFTWAREUPDATESREQUEST_H

@protocol SSSoftwareUpdatesRequestDelegate;


#import "SSRequest.h"
#import "SSSoftwareUpdatesContext.h"

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}


@property (nonatomic) NSObject<SSSoftwareUpdatesRequestDelegate> *delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)initWithUpdateQueueContext:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithUpdatesResponseBlock:(id)arg0 ;


@end


#endif