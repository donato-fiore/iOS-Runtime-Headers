// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMNUMBERFORMATTER_H
#define CMNUMBERFORMATTER_H


#import <Foundation/Foundation.h>


@interface CMNumberFormatter : NSObject {
    int _format;
    int _language;
    **void _numberFormatter;
}




+(id)formatterForNumberFormat:(int)arg0 language:(int)arg1 ;
-(id)initWithNumberFormat:(int)arg0 language:(int)arg1 ;
-(id)stringForNumber:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif