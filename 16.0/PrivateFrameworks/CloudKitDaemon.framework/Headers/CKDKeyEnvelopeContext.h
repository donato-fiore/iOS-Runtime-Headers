// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDKEYENVELOPECONTEXT_H
#define CKDKEYENVELOPECONTEXT_H

@class CKMergeableValueID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKDPCSManager.h"

@interface CKDKeyEnvelopeContext : NSObject <NSCopying>



@property (nonatomic) BOOL encryptMergeableValueMetadata; // ivar: _encryptMergeableValueMetadata
@property (copy, nonatomic) CKMergeableValueID *mergeableValueID; // ivar: _mergeableValueID
@property (retain, nonatomic) CKDPCSManager *pcsManager; // ivar: _pcsManager
@property (nonatomic) *_OpaquePCSShareProtection shareProtection; // ivar: _shareProtection


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)envelopeContextWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif