// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUCUSTOMFORMAT_H
#define OITSUCUSTOMFORMAT_H

@class NSString, NSMutableArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "OITSUCustomFormatData.h"

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying>

 {
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    BOOL _currencyCodeComputed;
}


@property (readonly, nonatomic) NSUInteger conditionCount;
@property (readonly, nonatomic) NSMutableArray *conditionList; // ivar: _conditionList
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) OITSUCustomFormatData *defaultFormatData; // ivar: _defaultFormatData
@property (readonly, nonatomic) NSString *formatName; // ivar: _formatName
@property (readonly, nonatomic) NSString *formatNameStem;
@property (readonly, nonatomic) NSString *formatNameTag;
@property (readonly, nonatomic) int formatType; // ivar: _formatType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithStemNameMatching:(id)arg0 ;
-(BOOL)p_isEqual:(id)arg0 matchingFullName:(BOOL)arg1 ;
-(NSUInteger)hash;
-(id)conditionalFormatAtIndex:(NSUInteger)arg0 ;
-(id)conditionalFormatDataForKey:(NSUInteger)arg0 ;
-(id)conditionalFormatDataForValue:(CGFloat)arg0 ;
-(id)conditionalFormatDataForValue:(CGFloat)arg0 outKey:(*NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customFormatWithNewName:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 formatType:(int)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg0 formatType:(int)arg1 data:(id)arg2 conditionList:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)p_addConditionOfType:(int)arg0 value:(CGFloat)arg1 data:(id)arg2 ;
-(void)p_makeFormatNameStemAndTag;


@end


#endif