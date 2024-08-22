// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWBONJOURSERVICEENDPOINT_H
#define NWBONJOURSERVICEENDPOINT_H

@class NSString;


#import "NWEndpoint.h"

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;


+(id)endpointWithName:(id)arg0 type:(id)arg1 domain:(id)arg2 ;
+(unsigned int)endpointType;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;


@end


#endif