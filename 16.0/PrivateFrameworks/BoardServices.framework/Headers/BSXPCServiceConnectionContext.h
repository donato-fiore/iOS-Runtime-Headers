// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSXPCSERVICECONNECTIONCONTEXT_H
#define BSXPCSERVICECONNECTIONCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BSXPCServiceConnectionContext : NSObject <NSCopying>

 {
    NSString *_proem;
}


@property (readonly, nonatomic, getter=isChild) BOOL child;
@property (readonly, nonatomic, getter=isClient) BOOL client;
@property (readonly, copy, nonatomic) NSString *endpointDescription;
@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isServer) BOOL server;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif