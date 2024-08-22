// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BSSERVICEOUTGOINGENDPOINT_H
#define _BSSERVICEOUTGOINGENDPOINT_H

@class NSString;
@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying>

 {
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    int _targetPID;
    unsigned int _invalidationGeneration;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif