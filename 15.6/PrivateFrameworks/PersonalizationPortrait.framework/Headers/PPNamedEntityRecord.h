// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNAMEDENTITYRECORD_H
#define PPNAMEDENTITYRECORD_H

@class NSString, NSSet;
@protocol PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPNamedEntityMetadata.h"
#import "PPNamedEntity.h"
#import "PPSource.h"

@interface PPNamedEntityRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>

 {
    float _initialScore;
    float _decayRate;
    unsigned int _extractionAssetVersion;
    unsigned char _algorithm;
    PPNamedEntityMetadata *_metadata;
    char _bucketizedSentimentScore;
}


@property (readonly, nonatomic) NSUInteger algorithm;
@property (readonly, nonatomic) unsigned char changeType; // ivar: _changeType
@property (readonly, nonatomic) CGFloat decayRate;
@property (readonly, nonatomic) PPNamedEntity *entity; // ivar: _entity
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) NSString *extractionOsBuild; // ivar: _extractionOsBuild
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) CGFloat initialScore;
@property (readonly, nonatomic) PPNamedEntityMetadata *metadata;
@property (readonly, nonatomic) CGFloat sentimentScore;
@property (readonly, nonatomic) PPSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
+(id)algorithmForName:(id)arg0 ;
+(id)describeAlgorithm:(NSUInteger)arg0 ;
+(id)describeChangeType:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedEntityRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif