// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITYPEDFACTORPROVIDER_H
#define TRITYPEDFACTORPROVIDER_H

@class NSString;
@protocol NSCopying, TRINamespaceFactorProviding;

#import <Foundation/Foundation.h>


@interface TRITypedFactorProvider : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *logDesc; // ivar: _logDesc
@property (readonly, nonatomic) NSObject<TRINamespaceFactorProviding> *provider; // ivar: _provider
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)providerWithType:(NSUInteger)arg0 provider:(id)arg1 logDesc:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProvider:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementLogDesc:(id)arg0 ;
-(id)copyWithReplacementProvider:(id)arg0 ;
-(id)copyWithReplacementType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 provider:(id)arg1 logDesc:(id)arg2 ;


@end


#endif