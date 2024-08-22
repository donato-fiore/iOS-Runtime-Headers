// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSKEEPLOCALREQUESTPROXY_H
#define NMSKEEPLOCALREQUESTPROXY_H



#import "NMSKeepLocalRequest.h"
#import "NMSMediaSyncService.h"

@interface NMSKeepLocalRequestProxy : NMSKeepLocalRequest {
    NMSMediaSyncService *_mediaSyncService;
}




-(id)initWithModelObject:(id)arg0 enableState:(NSInteger)arg1 ;
-(void)performWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif