// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCONTEXTCONFIGURATION_H
#define FCCONTEXTCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCContextConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier; // ivar: _contentContainerCombinationIdentifier
@property (readonly, copy, nonatomic) NSString *contentContainerIdentifier; // ivar: _contentContainerIdentifier
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) BOOL isProductionContentEnvironment; // ivar: _isProductionContentEnvironment
@property (readonly, nonatomic) BOOL isProductionPrivateDataEnvironment; // ivar: _isProductionPrivateDataEnvironment
@property (readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier; // ivar: _privateDataContainerCombinationIdentifier
@property (readonly, copy, nonatomic) NSString *privateDataContainerIdentifier; // ivar: _privateDataContainerIdentifier
@property (readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier; // ivar: _privateDataSecureContainerIdentifier


+(id)defaultConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEnvironment:(NSInteger)arg0 ;
-(id)initWithProductionContentEnvironment:(BOOL)arg0 productionPrivateDataEnvironment:(BOOL)arg1 contentContainerIdentifier:(id)arg2 privateDataContainerIdentifier:(id)arg3 privateDataSecureContainerIdentifier:(id)arg4 storeFrontID:(id)arg5 environment:(NSInteger)arg6 ;


@end


#endif