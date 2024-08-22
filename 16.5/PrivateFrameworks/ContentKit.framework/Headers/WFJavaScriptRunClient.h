// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFJAVASCRIPTRUNCLIENT_H
#define WFJAVASCRIPTRUNCLIENT_H

@class NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface WFJavaScriptRunClient : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint


-(id)initWithEndpoint:(id)arg0 ;
-(void)runJavaScript:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif