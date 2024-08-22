// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONFEATURE_H
#define FCPERSONALIZATIONFEATURE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCPersonalizationFeature : NSObject <NSCopying>

 {
    NSString *_personalizationIdentifier;
    NSString *_tagID;
}


@property (readonly, nonatomic) NSString *fc_description; // ivar: _fc_description
@property (readonly, nonatomic) NSString *personalizationIdentifier;
@property (nonatomic) BOOL shouldBeBoosted; // ivar: _shouldBeBoosted
@property (readonly, nonatomic) NSString *tagID;


+(id)featureForFreeValuedIdentifier:(id)arg0 ;
+(id)featureForIdentifier:(id)arg0 ;
+(id)featureFromTagID:(id)arg0 ;
+(id)featureObserver;
+(id)featuresFromHeadline:(id)arg0 personalizationTreatment:(id)arg1 ;
+(id)featuresFromIssue:(id)arg0 ;
+(id)featuresFromPersonalizingItem:(id)arg0 personalizationTreatment:(id)arg1 ;
+(id)featuresFromTag:(id)arg0 ;
+(id)featuresFromTagIDs:(id)arg0 ;
+(id)featuresFromTodayPersonalizationEvent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)featureWeightWithConfigurableValues:(id)arg0 publisherID:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif