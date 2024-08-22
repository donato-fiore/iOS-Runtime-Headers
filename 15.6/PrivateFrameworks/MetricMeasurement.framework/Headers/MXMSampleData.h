// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMSAMPLEDATA_H
#define MXMSAMPLEDATA_H

@class NSArray, NSSet, NSMutableDictionary;
@protocol NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MXMSampleData : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>



@property (retain) NSArray *enumSet; // ivar: _enumSet
@property (readonly, nonatomic) NSUInteger numberOfSamples;
@property (readonly, nonatomic) NSUInteger numberOfSets;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (retain, nonatomic) NSMutableDictionary *tagsToSampleSets; // ivar: _tagsToSampleSets


+(BOOL)supportsSecureCoding;
+(id)data;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_dataMatchingFilter:(id)arg0 ;
-(id)_sampleSetsWithTag:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataMatchingFilter:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(id)initWithSets:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sampleSetWithTag:(id)arg0 attribute:(id)arg1 ;
-(id)sampleSetWithTag:(id)arg0 attributes:(id)arg1 ;
-(id)sampleSetsWithTag:(id)arg0 ;
-(void)_appendAttribute:(id)arg0 ;
-(void)_appendData:(id)arg0 ;
-(void)_appendSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif