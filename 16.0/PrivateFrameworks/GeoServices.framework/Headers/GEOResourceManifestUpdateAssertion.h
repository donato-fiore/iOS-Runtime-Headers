// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESOURCEMANIFESTUPDATEASSERTION_H
#define GEORESOURCEMANIFESTUPDATEASSERTION_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    CGFloat _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}




-(id)debugDescription;
-(id)init;
-(id)initWithReason:(id)arg0 ;
-(void)_connectToGeod;
-(void)dealloc;


@end


#endif