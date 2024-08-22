// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCLUSTERLOADERREQUEST_H
#define SHCLUSTERLOADERREQUEST_H

@class SKCloudServiceController, NSURL;

#import <Foundation/Foundation.h>


@interface SHClusterLoaderRequest : NSObject

@property (readonly, nonatomic) SKCloudServiceController *cloudServiceController; // ivar: _cloudServiceController
@property (readonly, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (readonly, nonatomic) BOOL shouldDeleteExistingDatabaseAtOutputURL;
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 sourceURL:(id)arg1 outputURL:(id)arg2 ;
-(void)URLForRequestForStorefront:(id)arg0 withCompletion:(id)arg1 ;
-(void)clusterConfiguration:(id)arg0 ;
-(void)sourceURLWithCompletion:(id)arg0 ;


@end


#endif