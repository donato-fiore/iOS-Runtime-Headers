// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDATEFORMATCATEGORY_H
#define TSUDATEFORMATCATEGORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUDateFormatCategory : NSObject {
    *__CFDateFormatter _initialFormatter;
    NSMutableArray *_entries;
}




-(id)entryForSeparator:(unsigned short)arg0 ;
-(id)formatStringsDictionary;
-(id)initWithInitialPattern:(id)arg0 locale:(id)arg1 ;
-(id)initialPattern;
-(id)newDateFromString:(id)arg0 forceAllowAMPM:(BOOL)arg1 successfulFormatString:(*id)arg2 perfect:(*BOOL)arg3 ;
-(void)addSeparator:(unsigned short)arg0 format:(id)arg1 locale:(id)arg2 ;
-(void)dealloc;


@end


#endif