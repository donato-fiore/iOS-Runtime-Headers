// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDATEFORMATCATEGORYENTRY_H
#define TSUDATEFORMATCATEGORYENTRY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface TSUDateFormatCategoryEntry : NSObject {
    unsigned short mSeparator;
    *__CFArray mFormatters;
    NSMutableSet *mFormatStrings;
}




-(?)newDateFromString:(?)arg0 forceAllowAMPM:(?)arg1 successfulFormatStringperfect;
-(id)initWithSeparator:(unsigned short)arg0 ;
-(unsigned short)separator;
-(void)addFormat:(id)arg0 locale:(struct __CFLocale *)arg1 ;
-(void)dealloc;


@end


#endif