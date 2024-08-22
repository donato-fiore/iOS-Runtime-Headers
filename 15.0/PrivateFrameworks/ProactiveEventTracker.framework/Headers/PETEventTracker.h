// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETEVENTTRACKER_H
#define PETEVENTTRACKER_H

@class NSString, NSArray;
@protocol PETLoggingOutlet;

#import <Foundation/Foundation.h>


@interface PETEventTracker : NSObject

@property (readonly, nonatomic) NSString *featureId; // ivar: _featureId
@property (readonly, nonatomic) NSObject<PETLoggingOutlet> *loggingOutlet; // ivar: _loggingOutlet
@property (readonly, nonatomic) NSArray *propertySubsets; // ivar: _propertySubsets
@property (readonly, nonatomic) NSArray *registeredProperties; // ivar: _registeredProperties
@property (readonly, nonatomic) BOOL testingMode; // ivar: _testingMode


-(BOOL)_validatePropertyValues:(id)arg0 ;
-(id)_defaultLoggingOutlet;
-(id)_keyMetadataForEvent:(id)arg0 ;
-(id)_stringifiedPropertiesForEvent:(id)arg0 propertyValueArray:(id)arg1 ;
-(id)getKeyValueDict;
-(id)getValueForKey:(id)arg0 ;
-(id)initWithFeatureId:(id)arg0 registerProperties:(id)arg1 propertySubsets:(id)arg2 ;
-(void)_checkCardinalityForEvent:(id)arg0 ;
-(void)_checkInTestingMode;
-(void)_checkKeyLengthForEvent:(id)arg0 metaData:(id)arg1 ;
-(void)_checkPropertySubsets:(id)arg0 ;
-(void)_logValue:(id)arg0 forEvent:(id)arg1 stringifiedProperties:(id)arg2 metaData:(id)arg3 ;
-(void)_setValue:(id)arg0 forEvent:(id)arg1 stringifiedProperties:(id)arg2 metaData:(id)arg3 ;
-(void)_trackEvent:(id)arg0 withPropertyValues:(id)arg1 value:(id)arg2 ;
-(void)_trackEvent:(id)arg0 withPropertyValues:(id)arg1 value:(id)arg2 overwrite:(BOOL)arg3 ;
-(void)disableTestingMode;
-(void)enableTestingMode;


@end


#endif