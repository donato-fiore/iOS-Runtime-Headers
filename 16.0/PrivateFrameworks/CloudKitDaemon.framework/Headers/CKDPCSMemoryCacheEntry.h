// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSMEMORYCACHEENTRY_H
#define CKDPCSMEMORYCACHEENTRY_H


#import <Foundation/Foundation.h>

#import "CKDPCSData.h"

@interface CKDPCSMemoryCacheEntry : NSObject

@property CGFloat lastAccess; // ivar: _lastAccess
@property (retain, nonatomic) CKDPCSData *pcsData; // ivar: _pcsData


-(id)CKPropertiesDescription;
-(id)description;
-(id)init;


@end


#endif