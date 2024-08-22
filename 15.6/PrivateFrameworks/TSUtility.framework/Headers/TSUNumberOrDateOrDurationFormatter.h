// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUNUMBERORDATEORDURATIONFORMATTER_H
#define TSUNUMBERORDATEORDURATIONFORMATTER_H

@class NSFormatter, NSNumberFormatter;



@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter *mNumberFormatter;
}




-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)init;
-(id)stringForObjectValue:(id)arg0 ;
-(void)dealloc;


@end


#endif