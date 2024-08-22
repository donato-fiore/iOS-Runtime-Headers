// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKFORMAT_H
#define TSKFORMAT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKFormat : NSObject <NSCopying>



@property (readonly, nonatomic) ? formatStruct;
@property (readonly, nonatomic) unsigned int formatType; // ivar: _formatType


+(id)booleanFormat;
+(id)checkboxFormat;
+(id)defaultFormatWithFormatType:(unsigned int)arg0 locale:(id)arg1 ;
+(id)formatFromArchive:(*void)arg0 ;
+(id)formatFromTSUFormatStruct:(struct ? )arg0 ;
+(id)ratingFormat;
+(id)textFormat;
+(id)uniqueFormatForFormat:(id)arg0 ;
+(unsigned int)validatedDecimalPlaces:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)hasSimpleFormatType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asBaseFormat;
-(id)asBooleanFormat;
-(id)asCurrencyFormat;
-(id)asCustomFormatWrapper;
-(id)asDateTimeFormat;
-(id)asDurationFormat;
-(id)asFractionFormat;
-(id)asLegacyCustomFormat;
-(id)asMultipleChoiceListFormat;
-(id)asNumberFormat;
-(id)asStepperSliderFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)stringFromBool:(BOOL)arg0 locale:(id)arg1 ;
-(id)stringFromDate:(id)arg0 locale:(id)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromDurationTimeInterval:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromString:(id)arg0 locale:(id)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)encodeToArchive:(*void)arg0 archivingCustomFormats:(BOOL)arg1 ;


@end


#endif