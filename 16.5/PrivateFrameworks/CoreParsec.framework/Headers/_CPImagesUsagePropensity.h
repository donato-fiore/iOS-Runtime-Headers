// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPIMAGESUSAGEPROPENSITY_H
#define _CPIMAGESUSAGEPROPENSITY_H

@class PBCodable, NSString, NSData;
@protocol _CPImagesUsagePropensity, NSSecureCoding;



@interface _CPImagesUsagePropensity : PBCodable <_CPImagesUsagePropensity, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float image; // ivar: _image
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float other; // ivar: _other
@property (nonatomic) float querySuggestion; // ivar: _querySuggestion
@property (nonatomic) float recentResult; // ivar: _recentResult
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements
@property (nonatomic) float zkw; // ivar: _zkw


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif