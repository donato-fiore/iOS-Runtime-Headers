// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITARTWORK_H
#define MKTRANSITARTWORK_H

@class NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

#import <Foundation/Foundation.h>


@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource>

 {
    NSString *_accessibilityText;
}


@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) int artworkSourceType; // ivar: _artworkSourceType
@property (readonly, nonatomic) int artworkUseType; // ivar: _artworkUseType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge; // ivar: _hasRoutingIncidentBadge
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitIconDataSource> *iconDataSource; // ivar: _iconDataSource
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *iconFallbackShieldDataSource; // ivar: _iconFallbackShieldDataSource
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *shieldDataSource; // ivar: _shieldDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitTextDataSource> *textDataSource; // ivar: _textDataSource


+(id)artworkWithIcon:(id)arg0 accessibilityText:(id)arg1 ;
+(id)artworkWithShield:(id)arg0 accessibilityText:(id)arg1 ;
+(id)artworkWithText:(id)arg0 ;
-(id)initWithIcon:(id)arg0 accessibilityText:(id)arg1 ;
-(id)initWithIcon:(id)arg0 fallbackShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithShield:(id)arg0 accessibilityText:(id)arg1 ;
-(id)initWithText:(id)arg0 ;


@end


#endif