// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDINSTALLMANIFESTREQUEST_H
#define ASDINSTALLMANIFESTREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDInstallManifestRequestOptions.h"

@interface ASDInstallManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDInstallManifestRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif