// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FBSERVICEFACILITYSERVERPENDINGCONNECTION_H
#define _FBSERVICEFACILITYSERVERPENDINGCONNECTION_H

@class FBSServiceFacility;

#import <Foundation/Foundation.h>


@interface _FBServiceFacilityServerPendingConnection : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) FBSServiceFacility *facility; // ivar: _facility


+(id)pendingConnectionToFacility:(id)arg0 completion:(id)arg1 ;
-(id)initWithFacility:(id)arg0 completion:(id)arg1 ;


@end


#endif