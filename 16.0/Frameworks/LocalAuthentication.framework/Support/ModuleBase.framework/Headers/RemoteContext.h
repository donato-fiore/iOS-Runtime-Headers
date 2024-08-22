// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTECONTEXT_H
#define REMOTECONTEXT_H

@class NSString, NSUUID;
@protocol LARemoteContextOwnership;

#import <Foundation/Foundation.h>

#import "RemoteContext.h"

@interface RemoteContext : NSObject <LARemoteContextOwnership>

 {
    NSString *_description;
}


@property (nonatomic) NSUInteger acmExternalizedFormHash; // ivar: _acmExternalizedFormHash
@property (readonly, nonatomic) RemoteContext *originalOwnership; // ivar: _originalOwnership
@property (readonly, nonatomic) NSObject<LARemoteContextOwnership> *ownership; // ivar: _ownership
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)description;
-(id)initWithOwnership:(id)arg0 uuid:(id)arg1 description:(id)arg2 originalOwnership:(id)arg3 ;
-(void)dealloc;


@end


#endif