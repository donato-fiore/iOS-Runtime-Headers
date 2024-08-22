// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDNEHELPERCLIENTCACHEENTRY_H
#define _HMDNEHELPERCLIENTCACHEENTRY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _HMDNEHelperClientCacheEntry : NSObject

@property (readonly, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) NSString *signingId; // ivar: _signingId


-(id)initWithSigningId:(id)arg0 identifiers:(id)arg1 ;


@end


#endif