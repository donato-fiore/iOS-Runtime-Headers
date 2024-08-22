// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSCREENLOGUNLOCKSESSIONCONTEXT_H
#define ATXSCREENLOGUNLOCKSESSIONCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenLogUnlockSessionManager.h"

@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) ATXHomeScreenLogUnlockSessionManager *unlockSessionManager; // ivar: _unlockSessionManager


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXScreenLogUnlockSessionContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnlockSessionManager:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif