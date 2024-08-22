// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPOSTERSHUFFLECONFIGURATION_H
#define PFPOSTERSHUFFLECONFIGURATION_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport;

#import <Foundation/Foundation.h>


@interface PFPosterShuffleConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeCityscapes;
@property (nonatomic) BOOL includeLandscapes;
@property (nonatomic) BOOL includePeople;
@property (nonatomic) BOOL includePets;
@property (retain, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (nonatomic) NSInteger shuffleFrequency; // ivar: _shuffleFrequency
@property (nonatomic) NSUInteger shuffleSmartAlbums; // ivar: _shuffleSmartAlbums
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)analyticsPayload;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShuffleType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif