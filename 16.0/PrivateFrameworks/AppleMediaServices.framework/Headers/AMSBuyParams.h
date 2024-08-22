// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBUYPARAMS_H
#define AMSBUYPARAMS_H

@class NSMutableDictionary, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_backingDictionary;
}


@property (readonly, copy) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSDictionary *normalizedDictionary;
@property (readonly, nonatomic) CGFloat price;


+(BOOL)supportsSecureCoding;
+(id)buyParamsWithString:(id)arg0 ;
-(BOOL)containsKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)parameterForKey:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)requestDataWithError:(*id)arg0 ;
-(id)stringValue;
-(void)_parseBuyParams:(id)arg0 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setParameter:(id)arg0 forKey:(id)arg1 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif