// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTIMECONVERTER_H
#define TSTIMECONVERTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSTimeConverter : NSObject {
    NSArray *_taiutc;
}




-(CGFloat)leapSecondForTAIDate:(id)arg0 ;
-(CGFloat)leapSecondForUTCDate:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithTAIUTCArray:(id)arg0 ;
-(id)taiDateFromUTCDate:(id)arg0 ;
-(id)utcDateFromTAIDate:(id)arg0 ;


@end


#endif