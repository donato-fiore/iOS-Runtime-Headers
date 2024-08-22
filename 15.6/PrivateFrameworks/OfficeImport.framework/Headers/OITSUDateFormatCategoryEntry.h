// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUDATEFORMATCATEGORYENTRY_H
#define OITSUDATEFORMATCATEGORYENTRY_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface OITSUDateFormatCategoryEntry : NSObject {
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}




-(id)formatStrings;
-(id)initWithSeparator:(unsigned short)arg0 ;
-(id)newDateFromString:(id)arg0 forceAllowAMPM:(BOOL)arg1 successfulFormatString:(*id)arg2 perfect:(*BOOL)arg3 ;
-(unsigned short)separator;
-(void)addFormat:(id)arg0 locale:(id)arg1 ;


@end


#endif