// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXADCOMPONENTINSERTER_H
#define SXADCOMPONENTINSERTER_H

@class NSString;
@protocol SXComponentInserter, SXAdvertisingSettingsFactory, SXComponentInsertionConditionEngine;

#import <Foundation/Foundation.h>


@interface SXAdComponentInserter : NSObject <SXComponentInserter>



@property (readonly, nonatomic) NSObject<SXAdvertisingSettingsFactory> *advertisingSettingsFactory; // ivar: _advertisingSettingsFactory
@property (readonly, nonatomic) NSUInteger componentTraits;
@property (readonly, nonatomic) NSObject<SXComponentInsertionConditionEngine> *conditionEngine; // ivar: _conditionEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger insertedCount; // ivar: _insertedCount
@property (nonatomic) CGFloat lastInsertedYOffset; // ivar: _lastInsertedYOffset
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 DOMObjectProvider:(id)arg1 layoutProvider:(id)arg2 ;
-(NSUInteger)adTypeFromBannerType:(NSUInteger)arg0 ;
-(id)cacheValidatorForCache:(id)arg0 DOMObjectProvider:(id)arg1 ;
-(id)componentInsertForMarker:(id)arg0 DOMObjectProvider:(id)arg1 layoutProvider:(id)arg2 ;
-(id)conditionsForDOMObjectProvider:(id)arg0 ;
-(id)initWithConditionEngine:(id)arg0 advertisingSettingsFactory:(id)arg1 ;
-(void)componentInsertionCompleted;


@end


#endif