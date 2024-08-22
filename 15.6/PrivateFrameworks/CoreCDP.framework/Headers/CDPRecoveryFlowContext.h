// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPRECOVERYFLOWCONTEXT_H
#define CDPRECOVERYFLOWCONTEXT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPRecoveryFlowContext : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CDPContext *context; // ivar: _context
@property (nonatomic) BOOL hasPeersForRemoteApproval; // ivar: _hasPeersForRemoteApproval


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif