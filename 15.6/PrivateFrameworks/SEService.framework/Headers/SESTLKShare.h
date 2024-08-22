// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESTLKSHARE_H
#define SESTLKSHARE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface SESTLKShare : NSObject

@property (readonly) NSData *shareData; // ivar: _shareData
@property (readonly) NSData *sourcePeerIdentifier; // ivar: _sourcePeerIdentifier
@property (readonly) NSData *targetPeerIdentifier; // ivar: _targetPeerIdentifier
@property (readonly) NSData *tlkUUID; // ivar: _tlkUUID
@property (readonly) NSString *view; // ivar: _view


+(id)withCKKSExternalShare:(id)arg0 ;
+(id)withView:(id)arg0 tlkUUID:(id)arg1 sourcePeerIdentifier:(id)arg2 targetPeerIdentifier:(id)arg3 shareData:(id)arg4 ;
-(id)asCKKSExternalShare;


@end


#endif