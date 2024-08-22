// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKPICAFORMATTER_H
#define TSKPICAFORMATTER_H

@class NSFormatter, NSNumber, NSString;



@interface TSKPicaFormatter : NSFormatter

@property (copy, nonatomic) NSNumber *maximum; // ivar: mMaximum
@property (copy, nonatomic) NSNumber *minimum; // ivar: mMinimum
@property (copy, nonatomic) NSString *picaSeparator; // ivar: mPicaSeparator


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPicaSeparator:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif