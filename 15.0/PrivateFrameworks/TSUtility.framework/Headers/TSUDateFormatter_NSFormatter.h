// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATEFORMATTER_NSFORMATTER_H
#define TSUDATEFORMATTER_NSFORMATTER_H

@class NSFormatter, NSString;



@interface TSUDateFormatter_NSFormatter : NSFormatter

@property (nonatomic) BOOL isDateOnly; // ivar: isDateOnly
@property (nonatomic) BOOL isTimeOnly; // ivar: isTimeOnly
@property (retain, nonatomic) NSString *preferredFormat; // ivar: mPreferredFormat


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)stringForObjectValue:(id)arg0 ;
-(void)dealloc;


@end


#endif