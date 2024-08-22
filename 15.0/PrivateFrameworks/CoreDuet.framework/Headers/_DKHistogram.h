// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKHISTOGRAM_H
#define _DKHISTOGRAM_H

@class NSString, NSArray, NSDictionary, NSUUID, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DKEventStream.h"

@interface _DKHistogram : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger countOverAllValues; // ivar: _countOverAllValues
@property (retain, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (retain, nonatomic) NSArray *deviceIdentifiers; // ivar: _deviceIdentifiers
@property (retain, nonatomic) NSDictionary *histogram; // ivar: _histogram
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (retain, nonatomic) _DKEventStream *stream; // ivar: _stream


+(BOOL)supportsSecureCoding;
+(id)entityName;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)countForValueDouble:(id)arg0 ;
-(CGFloat)relativeFrequencyForValue:(id)arg0 ;
-(NSUInteger)countForValue:(id)arg0 ;
-(id)countDictionary;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 ;
-(id)initWithManagedObject:(id)arg0 ;
-(id)initWithValues:(id)arg0 ;
-(id)insertInManagedObjectContext:(id)arg0 ;
-(void)_addPropertiesFrom:(id)arg0 ;
-(void)addHistogram:(id)arg0 ;
-(void)addHistogram:(id)arg0 decayingExistingCounts:(CGFloat)arg1 ;
-(void)addValue:(id)arg0 ;
-(void)addValue:(id)arg0 withCount:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)subtractHistogram:(id)arg0 ;
-(void)subtractValue:(id)arg0 ;


@end


#endif