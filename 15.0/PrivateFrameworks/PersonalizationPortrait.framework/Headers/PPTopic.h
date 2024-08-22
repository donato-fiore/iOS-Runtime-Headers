// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTOPIC_H
#define PPTOPIC_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPTopicRecord.h"

@interface PPTopic : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) NSString *clusterIdentifier; // ivar: _clusterIdentifier
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) PPTopicRecord *mostRelevantRecord;
@property (readonly, nonatomic) CGFloat sentimentScore;
@property (readonly, nonatomic) NSString *topicIdentifier; // ivar: _topicIdentifier


+(BOOL)supportsSecureCoding;
+(id)clusterIdentifierFromTopicId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTopic:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)id;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithId:(id)arg0 ;
-(id)initWithTopicIdentifier:(id)arg0 ;
-(id)initWithTopicIdentifier:(id)arg0 mostRelevantRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif