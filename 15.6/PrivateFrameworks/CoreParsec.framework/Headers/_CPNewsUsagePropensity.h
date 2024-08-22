// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPNEWSUSAGEPROPENSITY_H
#define _CPNEWSUSAGEPROPENSITY_H

@class PBCodable, NSString, NSData;
@protocol _CPNewsUsagePropensity, NSSecureCoding;



@interface _CPNewsUsagePropensity : PBCodable <_CPNewsUsagePropensity, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float other; // ivar: _other
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif