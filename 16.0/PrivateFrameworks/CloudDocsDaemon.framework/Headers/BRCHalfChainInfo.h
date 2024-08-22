// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCHALFCHAININFO_H
#define BRCHALFCHAININFO_H

@class CKRecord;

#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"

@interface BRCHalfChainInfo : NSObject

@property (readonly, nonatomic) BRFieldCKInfo *ckInfo; // ivar: _ckInfo
@property (retain, nonatomic) CKRecord *record; // ivar: _record


-(id)initWithRecord:(id)arg0 ckInfo:(id)arg1 ;


@end


#endif