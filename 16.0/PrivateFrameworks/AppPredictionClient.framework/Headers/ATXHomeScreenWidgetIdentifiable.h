// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENWIDGETIDENTIFIABLE_H
#define ATXHOMESCREENWIDGETIDENTIFIABLE_H

@class NSData, INIntent, ATXMemoryPressureMonitor, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenPage.h"

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver>

 {
    NSData *_intentProtoData;
    INIntent *_intent;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}


@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntent *intent;
@property (nonatomic, getter=isOnboardingWidget) BOOL onboardingWidget; // ivar: _onboardingWidget
@property (weak, nonatomic) ATXHomeScreenPage *page; // ivar: _page
@property (copy, nonatomic) NSString *predictionSource; // ivar: _predictionSource
@property (nonatomic) BOOL requiresAppLaunch; // ivar: _requiresAppLaunch
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) NSUInteger size; // ivar: _size
@property (nonatomic, getter=isSuggestedWidget) BOOL suggestedWidget; // ivar: _suggestedWidget
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *widgetKind; // ivar: _widgetKind
@property (copy, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSameWidgetAsWidgetBundleId:(id)arg0 widgetKind:(id)arg1 ;
-(id)_dictionaryRepresentationIncludingFullIntent:(BOOL)arg0 ;
-(id)compactDescription;
-(id)dictionaryRepresentation;
-(id)encodeAsProto;
-(id)init;
-(id)initFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMemoryPressureMonitor:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleMemoryPressure;


@end


#endif