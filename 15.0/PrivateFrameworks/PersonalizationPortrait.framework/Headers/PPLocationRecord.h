// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCATIONRECORD_H
#define PPLOCATIONRECORD_H

@class NSUUID, NSArray, NSString, NSSet;
@protocol PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPLocation.h"
#import "PPSource.h"

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>

 {
    NSUUID *_uuid;
    PPLocation *_location;
    PPSource *_source;
    unsigned char _algorithm;
    float _initialScore;
    float _decayRate;
    unsigned int _extractionAssetVersion;
    char _bucketizedSentimentScore;
}


@property (readonly, nonatomic) unsigned short algorithm;
@property (readonly, nonatomic) NSArray *contextualNamedEntities; // ivar: _contextualNamedEntities
@property (readonly, nonatomic) CGFloat decayRate;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) NSString *extractionOsBuild; // ivar: _extractionOsBuild
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) CGFloat initialScore;
@property (readonly, nonatomic) BOOL isAmbiguous; // ivar: _isAmbiguous
@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) CGFloat sentimentScore;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) NSUUID *uuid;


+(BOOL)supportsSecureCoding;
+(id)algorithmForName:(id)arg0 ;
+(id)describeAlgorithm:(unsigned short)arg0 ;
+(id)sharedAmbiguousRecord;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocationRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)identifier;
-(id)init;
-(id)initAmbiguousRecord;
-(id)initWithCoder:(id)arg0 ;
-(id)init_;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)supplementFieldsWithClusterID:(id)arg0 locationWithLatLong:(id)arg1 ;


@end


#endif