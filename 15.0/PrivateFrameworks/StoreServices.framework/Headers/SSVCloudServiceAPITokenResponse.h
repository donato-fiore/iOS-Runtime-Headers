// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVCLOUDSERVICEAPITOKENRESPONSE_H
#define SSVCLOUDSERVICEAPITOKENRESPONSE_H

@class NSString, NSError;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding>



@property (copy, nonatomic) NSString *apiToken; // ivar: _apiToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithToken:(id)arg0 error:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif