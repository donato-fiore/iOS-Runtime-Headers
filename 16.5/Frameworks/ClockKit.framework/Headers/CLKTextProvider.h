// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKTEXTPROVIDER_H
#define CLKTEXTPROVIDER_H

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CLKTextProviderCache.h"
#import "CLKClockTimerToken.h"

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying>

 {
    CLKTextProviderCache *_defaultCache;
    NSMutableDictionary *_cachesByKey;
    NSMutableArray *_recentCacheKeys;
    NSUInteger _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_secondTimerToken;
    CLKClockTimerToken *_minuteTimerToken;
    CLKClockTimerToken *_30fpsTimerToken;
    BOOL _finalized;
}


@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (copy, nonatomic) NSArray *fontFeatures; // ivar: _fontFeatures
@property (nonatomic) BOOL ignoreUppercaseStyle; // ivar: _ignoreUppercaseStyle
@property (nonatomic) BOOL italicized; // ivar: _italicized
@property (nonatomic) BOOL monospacedNumbers; // ivar: _monospacedNumbers
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger shrinkTextPreference; // ivar: _shrinkTextPreference
@property (nonatomic) NSInteger timeTravelUpdateFrequency; // ivar: _timeTravelUpdateFrequency
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSInteger updateFrequency;


+(BOOL)supportsSecureCoding;
+(id)localizableTextProviderWithStringsFileFormatKey:(id)arg0 textProviders:(id)arg1 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg0 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg0 shortTextKey:(id)arg1 ;
+(id)new;
+(id)providerWithJSONObjectRepresentation:(id)arg0 ;
+(id)textProviderWithFormat:(id)arg0 ;
+(id)textProviderWithFormat:(id)arg0 arguments:(char *)arg1 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_cacheForKey:(id)arg0 ;
-(id)_defaultCache;
-(id)_description;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_italicize:(id)arg0 ;
-(id)_localizedTextProviderWithBundle:(id)arg0 forLocalization:(id)arg1 ;
-(id)_monospacedNumbers:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg0 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg0 andRemovingDesignator:(BOOL)arg1 designatorExists:(*BOOL)arg2 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg0 designatorExists:(*BOOL)arg1 ;
-(id)attributedString;
-(id)attributedTextAndSize:(struct CGSize *)arg0 forMaxWidth:(CGFloat)arg1 withStyle:(id)arg2 now:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)finalizedCopy;
-(id)init;
-(id)initPrivate;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedTextProviderWithBundle:(id)arg0 forLocalization:(id)arg1 ;
-(id)sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(struct CGSize )minimumSizeWithStyle:(id)arg0 now:(id)arg1 ;
-(void)_commonInit;
-(void)_endSession;
-(void)_localeChanged;
-(void)_maybeStartOrStopUpdates;
-(void)_pruneCacheKeysIfNecessary;
-(void)_startSessionWithDate:(id)arg0 ;
-(void)_update;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif