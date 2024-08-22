// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICRECORD_H
#define PPTOPICRECORD_H

@class NSString, NSSet;
@protocol PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPTopicMetadata.h"
#import "PPSource.h"
#import "PPTopic.h"

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>

 {
    char _bucketizedSentimentScore;
}


@property (readonly, nonatomic) NSUInteger algorithm; // ivar: _algorithm
@property (readonly, nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (readonly, nonatomic) unsigned int extractionAssetVersion; // ivar: _extractionAssetVersion
@property (readonly, nonatomic) NSString *extractionOsBuild; // ivar: _extractionOsBuild
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) CGFloat initialScore; // ivar: _initialScore
@property (readonly, nonatomic) BOOL isLocal; // ivar: _isLocal
@property (readonly, nonatomic) PPTopicMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) CGFloat sentimentScore;
@property (readonly, nonatomic) PPSource *source; // ivar: _source
@property (readonly, nonatomic) PPTopic *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(id)algorithmForName:(id)arg0 ;
+(id)describeAlgorithm:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTopicRecord:(id)arg0 ;
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