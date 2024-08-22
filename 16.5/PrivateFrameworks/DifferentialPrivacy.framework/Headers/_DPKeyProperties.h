// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPKEYPROPERTIES_H
#define _DPKEYPROPERTIES_H

@class NSNumber, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "_DPPrivacyBudget.h"
#import "_DPValueRange.h"

@interface _DPKeyProperties : NSObject

@property (readonly, nonatomic) NSNumber *acceptableError; // ivar: _acceptableError
@property (readonly, nonatomic) BOOL approvedForNonDNU; // ivar: _approvedForNonDNU
@property (readonly, nonatomic) BOOL bitStringAlgorithm; // ivar: _bitStringAlgorithm
@property (readonly, nonatomic) _DPPrivacyBudget *budget; // ivar: _budget
@property (readonly, nonatomic) NSUInteger dataAlgorithm; // ivar: _dataAlgorithm
@property (readonly, nonatomic) BOOL directUpload; // ivar: _directUpload
@property (readonly, nonatomic) NSUInteger fragmentCount; // ivar: _fragmentCount
@property (readonly, nonatomic) NSUInteger fragmentWidth; // ivar: _fragmentWidth
@property (readonly, nonatomic) NSString *huffmanTableClass; // ivar: _huffmanTableClass
@property (readonly, nonatomic) BOOL keyPatternsAllowed; // ivar: _keyPatternsAllowed
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly, copy, nonatomic) NSString *noiseDistribution; // ivar: _noiseDistribution
@property (readonly, nonatomic) NSDictionary *parameterDictionary; // ivar: _parameterDictionary
@property (readonly, nonatomic) _DPValueRange *possibleRange; // ivar: _possibleRange
@property (readonly, nonatomic) NSNumber *privacyParameter; // ivar: _privacyParameter
@property (readonly, nonatomic) NSUInteger privatizationAlgorithm; // ivar: _privatizationAlgorithm
@property (readonly, copy, nonatomic) NSString *propertiesName; // ivar: _propertiesName
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString; // ivar: _serverAlgorithmString
@property (readonly, nonatomic) NSUInteger submissionPriority; // ivar: _submissionPriority
@property (readonly, nonatomic) NSUInteger transport; // ivar: _transport
@property (readonly, nonatomic) _DPValueRange *trimmedScale; // ivar: _trimmedScale


+(id)keyPropertiesForName:(id)arg0 ;
+(id)keyPropertiesWithName:(id)arg0 fromDictionary:(id)arg1 ;
+(id)propertiesFromFile:(id)arg0 ;
+(void)initialize;
-(id)description;
-(id)init;
-(id)initWithPropertyName:(id)arg0 dictionary:(id)arg1 ;


@end


#endif