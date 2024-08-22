// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVREQUESTLOGGER_H
#define COREDAVREQUESTLOGGER_H

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

#import <Foundation/Foundation.h>


@interface CoreDAVRequestLogger : NSObject {
    id<CoreDAVAccountInfoProvider> *_provider;
    int _snippetsLogged;
}


@property (retain, nonatomic) NSArray *headerSortDescriptors; // ivar: _headerSortDescriptors


+(id)_redactedHeadersFromHeaders:(id)arg0 ;
-(id)_inflateRequestBody:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(void)finishCoreDAVResponse;
-(void)logCoreDAVRequest:(id)arg0 withTaskIdentifier:(id)arg1 ;
-(void)logCoreDAVResponseHeaders:(id)arg0 andStatusCode:(NSInteger)arg1 withTaskIdentifier:(id)arg2 ;
-(void)logCoreDAVResponseSnippet:(id)arg0 ;
-(void)logCoreDAVResponseSnippet:(id)arg0 withTaskIdentifier:(id)arg1 ;
-(void)logCoreDAVResponseSnippet:(id)arg0 withTaskIdentifier:(id)arg1 isBody:(BOOL)arg2 ;


@end


#endif