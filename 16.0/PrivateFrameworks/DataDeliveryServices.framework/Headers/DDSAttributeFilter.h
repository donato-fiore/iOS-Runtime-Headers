// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSATTRIBUTEFILTER_H
#define DDSATTRIBUTEFILTER_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDSAttributeFilter : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *filters; // ivar: _filters


+(BOOL)supportsSecureCoding;
+(NSUInteger)hashDictionary:(id)arg0 ;
+(NSUInteger)hashObject:(id)arg0 ;
+(NSUInteger)hashSet:(id)arg0 ;
+(id)attributeFilter;
+(id)attributeFilterWithDictionary:(id)arg0 ;
-(BOOL)doesContainAttributes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryFilter:(id)arg0 ;
-(NSUInteger)hash;
-(id)_setForKey:(id)arg0 ;
-(id)allowedValuesForKey:(id)arg0 ;
-(id)description;
-(id)dumpDescription;
-(id)entriesMatchingAttributes:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)addAllowedValue:(id)arg0 forKey:(id)arg1 ;
-(void)addAllowedValues:(id)arg0 forKey:(id)arg1 ;
-(void)addEntriesFromFilter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAllowedValuesAndKeys:(id)arg0 ;
-(void)removeAllowedValue:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllowedValues:(id)arg0 forKey:(id)arg1 ;


@end


#endif