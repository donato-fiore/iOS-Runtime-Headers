// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSTREAMSPROTOCOL_H
#define MSSTREAMSPROTOCOL_H

@class NSURL, NSString;
@protocol MSStreamsProtocolDelegate;

#import <Foundation/Foundation.h>


@interface MSStreamsProtocol : NSObject

@property (nonatomic) NSObject<MSStreamsProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) NSURL *deleteURL;
@property (readonly, weak, nonatomic) NSURL *getURL;
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly, weak, nonatomic) NSURL *putURL;
@property (readonly, weak, nonatomic) NSURL *reauthorizeURL;
@property (readonly, weak, nonatomic) NSURL *resetURL;
@property (readonly, weak, nonatomic) NSURL *uploadCompleteURL;


-(id)deviceInfoDict;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_didFindServerSideConfigurationVersion:(id)arg0 ;
-(void)_didReceiveRetryAfterDate:(id)arg0 ;
-(void)_refreshAuthTokenForContext:(struct __MSSPCContext *)arg0 ;
-(void)abort;


@end


#endif