// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCODESIGNINGENTRY_H
#define MCMCODESIGNINGENTRY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface MCMCodeSigningEntry : NSObject

@property (nonatomic, getter=isAdvanceCopy) BOOL advanceCopy; // ivar: _advanceCopy
@property (retain, nonatomic) NSArray *childBundleIdentifiers; // ivar: _childBundleIdentifiers
@property (retain, nonatomic) NSDictionary *codeSigningInfo; // ivar: _codeSigningInfo
@property (nonatomic) NSUInteger dataContainerClass; // ivar: _dataContainerClass
@property (nonatomic, getter=isInvalid) BOOL invalid; // ivar: _invalid
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (nonatomic, getter=isRegisteredByCaller) BOOL registeredByCaller; // ivar: _registeredByCaller
@property (nonatomic, getter=isRegisteredByKernel) BOOL registeredByKernel; // ivar: _registeredByKernel


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCodeSigningInfo:(id)arg0 ;
-(id)initWithCodeSigningInfo:(id)arg0 andDataContainerClass:(NSUInteger)arg1 ;
-(id)initWithSerializedDictionary:(id)arg0 ;
-(id)serialize;


@end


#endif