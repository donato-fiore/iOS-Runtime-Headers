// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFITEMUPDATEOUTCOME_H
#define HFITEMUPDATEOUTCOME_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSArray *allKeys;
@property (nonatomic) NSUInteger outcomeType; // ivar: _outcomeType
@property (readonly, nonatomic) NSDictionary *results; // ivar: _results


+(id)outcomeWithResults:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithResults:(id)arg0 ;
-(id)initWithResults:(id)arg0 type:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif