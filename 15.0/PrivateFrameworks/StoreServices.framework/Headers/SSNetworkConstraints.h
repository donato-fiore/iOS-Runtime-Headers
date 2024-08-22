// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSNETWORKCONSTRAINTS_H
#define SSNETWORKCONSTRAINTS_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding, SSXPCCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSNetworkConstraints : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}


@property (readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)arg0 ;
+(id)_newModernNetworkConstraintsWithArray:(id)arg0 ;
+(id)networkConstraintsForDownloadKind:(id)arg0 fromBag:(id)arg1 ;
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg0 ;
+(void)_addNetworkConstraintsToDictionary:(id)arg0 forNetworkType:(NSInteger)arg1 legacyDictionary:(id)arg2 ;
-(BOOL)hasSizeLimitForNetworkType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_sizeLimitForNetworkType:(NSInteger)arg0 ;
-(NSInteger)sizeLimitForNetworkType:(NSInteger)arg0 ;
-(id)_copySizeLimits;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_disableAllNetworkTypes;
-(void)_setSizeLimit:(NSInteger)arg0 forNetworkType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)disableCellularNetworkTypes;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAllNetworkTypesDisabled;
-(void)setSizeLimit:(NSInteger)arg0 forNetworkType:(NSInteger)arg1 ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)arg0 ;


@end


#endif