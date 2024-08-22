// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BGPROCESSINGTASKREQUEST_H
#define BGPROCESSINGTASKREQUEST_H



#import "BGTaskRequest.h"

@interface BGProcessingTaskRequest : BGTaskRequest

@property BOOL requiresExternalPower; // ivar: _requiresExternalPower
@property BOOL requiresNetworkConnectivity; // ivar: _requiresNetworkConnectivity


+(Class)_correspondingTaskClass;
+(id)_requestFromActivity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_activity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif