// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONFAVORABILITYSCORES_H
#define FCPERSONALIZATIONFAVORABILITYSCORES_H

@class NTPBPublisherFavorabilityScores, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding>

 {
    NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
}


@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSDictionary *tagIDToScores; // ivar: _tagIDToScores


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPBFavorabilityScores:(id)arg0 ;
-(id)scoreForTagID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif