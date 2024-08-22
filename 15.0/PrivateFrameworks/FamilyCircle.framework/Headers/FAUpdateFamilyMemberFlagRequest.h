// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAUPDATEFAMILYMEMBERFLAGREQUEST_H
#define FAUPDATEFAMILYMEMBERFLAGREQUEST_H

@class NSNumber, NSString;


#import "FAFamilyCircleRequest.h"

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSString *_flag;
    BOOL _enabled;
}




-(id)initWithFamilyMemberDSID:(id)arg0 flag:(id)arg1 enabled:(BOOL)arg2 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif