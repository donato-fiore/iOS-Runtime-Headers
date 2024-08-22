// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICUSERTOKENFETCHREQUEST_H
#define ICMUSICUSERTOKENFETCHREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "ICRemoteRequestOperation.h"
#import "ICClientInfo.h"

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>

 {
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    NSUInteger _options;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeveloperToken:(id)arg0 clientInfo:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_executeByPerformingStoreRequestWithContext:(id)arg0 qualityOfService:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)execute;
-(void)performRequestOnOperationQueue:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif