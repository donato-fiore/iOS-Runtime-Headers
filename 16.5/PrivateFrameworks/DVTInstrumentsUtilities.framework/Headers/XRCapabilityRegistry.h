// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRCAPABILITYREGISTRY_H
#define XRCAPABILITYREGISTRY_H

@class NSMutableDictionary;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface XRCapabilityRegistry : NSObject <NSMutableCopying, NSCopying>

 {
    NSMutableDictionary *_capabilityRanges;
    NSMutableDictionary *_unimplementedRecoveries;
    NSMutableDictionary *_abandonedRecoveries;
}




+(id)applicationCapabilities;
+(void)initialize;
-(NSUInteger)supportForCapability:(id)arg0 versions:(struct _NSRange )arg1 ;
-(id)abandonedRecoveryForCapability:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRanges:(id)arg0 unimplementedRecoveries:(id)arg1 abandonedRecoveries:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)unimplementedRecoveryForCapability:(id)arg0 ;
-(struct _NSRange )supportedVersionsForCapability:(id)arg0 ;
-(void)registerCapability:(id)arg0 versions:(struct _NSRange )arg1 ;
-(void)setAbandonedRecoverySuggestion:(id)arg0 forCapability:(id)arg1 ;
-(void)setUnimplementedRecoverySuggestion:(id)arg0 forCapability:(id)arg1 ;


@end


#endif