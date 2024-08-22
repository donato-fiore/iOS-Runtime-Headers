// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATEFORMATCATEGORYENTRY_H
#define TSUDATEFORMATCATEGORYENTRY_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface TSUDateFormatCategoryEntry : NSObject {
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