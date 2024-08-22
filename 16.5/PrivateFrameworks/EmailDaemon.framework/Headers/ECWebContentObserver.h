// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECWEBCONTENTOBSERVER_H
#define ECWEBCONTENTOBSERVER_H

@class NSString;
@protocol ECWebContentObserver;

#import <Foundation/Foundation.h>

#import "EDWebContentParser.h"

@interface ECWebContentObserver : NSObject <ECWebContentObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) EDWebContentParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(id)initWithParser:(id)arg0 ;
-(void)baseURL:(id)arg0 didRequestRemoteContentURLs:(id)arg1 ;
-(void)logWebBundleMessage:(id)arg0 ;
-(void)receiveDataDetectionResults:(id)arg0 ;
-(void)requestDataDetectionResultsWithBaseURL:(id)arg0 ;


@end


#endif