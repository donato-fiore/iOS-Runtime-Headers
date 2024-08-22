// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWHOSTENDPOINT_H
#define NWHOSTENDPOINT_H

@class NSString;


#import "NWEndpoint.h"

@interface NWHostEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSString *port;


+(id)endpointWithHostname:(id)arg0 port:(id)arg1 ;
+(unsigned int)endpointType;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;


@end


#endif