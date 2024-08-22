// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFOSUGGESTION_H
#define ATXINFOSUGGESTION_H

@class NSData, INIntent, NSString, NSDate, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>

#import "ATXCustomIntentDescription.h"

@interface ATXInfoSuggestion : NSObject <NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver>

 {
    NSData *_intentProtoData;
    INIntent *_intent;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) NSInteger confidenceLevel; // ivar: _confidenceLevel
@property (readonly, nonatomic) NSString *criterion; // ivar: _criterion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) ATXCustomIntentDescription *intentDescription; // ivar: _intentDescription
@property (readonly, nonatomic) BOOL isFallback;
@property (nonatomic) NSUInteger layouts; // ivar: _layouts
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSNumber *relevanceScore; // ivar: _relevanceScore
@property (copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *suggestionIdentifier; // ivar: _suggestionIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *widgetBundleIdentifier; // ivar: _widgetBundleIdentifier
@property (readonly, nonatomic) NSString *widgetKind; // ivar: _widgetKind


+(BOOL)supportsSecureCoding;
+(id)_executableSpecificationForInfoSuggestion:(id)arg0 ;
+(id)_uiSpecForInfoSuggestion:(id)arg0 ;
+(id)infoSuggestionFromProactiveSuggestion:(id)arg0 ;
+(id)proactiveSuggestionForInfoSuggestion:(id)arg0 withClientModelId:(id)arg1 clientModelVersion:(id)arg2 rawScore:(CGFloat)arg3 confidenceCategory:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXInfoSuggestion:(id)arg0 ;
-(id)_dictionaryRepresentationAvoidingLoadingIntentIfPossible:(BOOL)arg0 ;
-(id)_initWithAppBundleIdentifier:(id)arg0 widgetBundleIdentifier:(id)arg1 widgetKind:(id)arg2 criterion:(id)arg3 applicableLayouts:(NSUInteger)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intent:(id)arg8 intentDescription:(id)arg9 metadata:(id)arg10 relevanceScore:(id)arg11 ;
-(id)_safeDecodeObjectOfClass:(Class)arg0 allowedClasses:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 ;
-(id)_safeDecodeObjectOfClass:(Class)arg0 forKey:(id)arg1 withCoder:(id)arg2 ;
-(id)_verifyAndReturnDecodedObject:(id)arg0 ofClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)dictionaryRepresentation;
-(id)encodeAsProto;
-(id)init;
-(id)initWithAppBundleIdentifier:(id)arg0 widgetBundleIdentifier:(id)arg1 widgetKind:(id)arg2 criterion:(id)arg3 applicableLayouts:(NSUInteger)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intent:(id)arg8 metadata:(id)arg9 relevanceScore:(id)arg10 ;
-(id)initWithAppBundleIdentifier:(id)arg0 widgetBundleIdentifier:(id)arg1 widgetKind:(id)arg2 criterion:(id)arg3 applicableLayouts:(NSUInteger)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intentDescription:(id)arg8 metadata:(id)arg9 relevanceScore:(id)arg10 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithProactiveSuggestion:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleMemoryPressure;


@end


#endif