// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDEXTERNALMANIFESTREQUEST_H
#define ASDEXTERNALMANIFESTREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDExternalManifestRequestOptions.h"

@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDExternalManifestRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif