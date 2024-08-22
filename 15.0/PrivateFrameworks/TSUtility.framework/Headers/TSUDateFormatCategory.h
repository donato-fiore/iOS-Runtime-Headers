// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATEFORMATCATEGORY_H
#define TSUDATEFORMATCATEGORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUDateFormatCategory : NSObject {
    *__CFDateFormatter mInitialFormatter;
    NSMutableArray *mEntries;
}




-(?)newDateFromString:(?)arg0 forceAllowAMPM:(?)arg1 successfulFormatStringperfect;
-(id)entryForSeparator:(unsigned short)arg0 ;
-(id)initWithInitialPattern:(id)arg0 locale:(struct __CFLocale *)arg1 ;
-(void)addSeparator:(unsigned short)arg0 format:(id)arg1 locale:(struct __CFLocale *)arg2 ;
-(void)dealloc;


@end


#endif