// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMSAMPLEFILTER_H
#define MXMSAMPLEFILTER_H

@class NSMutableDictionary, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *attributeFilters; // ivar: _attributeFilters
@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;
@property (retain, nonatomic) NSSet *tagFilters; // ivar: _tagFilters


+(BOOL)supportsSecureCoding;
+(id)filterWithAttributeFilter:(id)arg0 ;
+(id)filterWithAttributeFilter:(id)arg0 tagFilter:(id)arg1 ;
+(id)filterWithAttributeFilters:(id)arg0 ;
+(id)filterWithTagFilter:(id)arg0 ;
+(id)filterWithTagFilters:(id)arg0 ;
-(BOOL)matchesSample:(id)arg0 ;
-(BOOL)matchesSampleSet:(id)arg0 ;
-(BOOL)matchesSamplesWithAttribute:(id)arg0 ;
-(BOOL)matchesSamplesWithAttributes:(id)arg0 ;
-(BOOL)matchesSamplesWithTag:(id)arg0 ;
-(id)attributeFilterWithName:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributeFilter:(id)arg0 ;
-(id)initWithAttributeFilter:(id)arg0 tagFilter:(id)arg1 ;
-(id)initWithAttributeFilters:(id)arg0 ;
-(id)initWithAttributeFilters:(id)arg0 tagFilters:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTagFilter:(id)arg0 ;
-(id)initWithTagFilters:(id)arg0 ;
-(void)addAttributeFilters:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif