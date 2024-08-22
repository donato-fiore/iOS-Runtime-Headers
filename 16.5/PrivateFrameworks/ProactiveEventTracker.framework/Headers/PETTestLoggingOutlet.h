// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETTESTLOGGINGOUTLET_H
#define PETTESTLOGGINGOUTLET_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol PETLoggingOutlet;

#import <Foundation/Foundation.h>


@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet>



@property (readonly, nonatomic) NSMutableArray *allLoggedKeys; // ivar: _allLoggedKeys
@property (readonly, nonatomic) NSMutableArray *allLoggedValues; // ivar: _allLoggedValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *keyValues; // ivar: _keyValues
@property (readonly, nonatomic) CGFloat lastLoggedDistributionValue; // ivar: _lastLoggedDistributionValue
@property (readonly, nonatomic) NSString *lastLoggedKey; // ivar: _lastLoggedKey
@property (readonly, nonatomic) NSUInteger lastLoggedScalarValue; // ivar: _lastLoggedScalarValue
@property (readonly, nonatomic) CGFloat previousLoggedDistributionValue; // ivar: _previousLoggedDistributionValue
@property (readonly, nonatomic) NSString *previousLoggedKey; // ivar: _previousLoggedKey
@property (readonly, nonatomic) NSUInteger previousLoggedScalarValue; // ivar: _previousLoggedScalarValue
@property (readonly) Class superclass;


-(id)getValueForKey:(id)arg0 ;
-(id)init;
-(void)logDoubleValue:(CGFloat)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)logErrorForEvent:(id)arg0 featureId:(id)arg1 reason:(id)arg2 ;
-(void)logUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)reset;
-(void)setUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;


@end


#endif