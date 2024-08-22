// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICMETADATA_H
#define PPTOPICMETADATA_H

@class NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) unsigned short algorithmResultCount; // ivar: _algorithmResultCount
@property (readonly, nonatomic) unsigned short algorithmResultPosition; // ivar: _algorithmResultPosition
@property (readonly, nonatomic) BOOL exactMatchInSourceText; // ivar: _exactMatchInSourceText
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) unsigned short impressionCount; // ivar: _impressionCount
@property (readonly, nonatomic) unsigned short occurrencesInSource; // ivar: _occurrencesInSource


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTopicMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImpressionCount:(unsigned short)arg0 occurrencesInSource:(unsigned short)arg1 algorithmResultPosition:(unsigned short)arg2 algorithmResultCount:(unsigned short)arg3 exactMatchInSourceText:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif