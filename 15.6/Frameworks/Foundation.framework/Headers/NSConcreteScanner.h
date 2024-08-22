// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONCRETESCANNER_H
#define NSCONCRETESCANNER_H



#import "NSScanner.h"
#import "NSString.h"
#import "NSCharacterSet.h"

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id *locale;
    NSUInteger scanLocation;
    ? flags;
}




-(BOOL)caseSensitive;
-(BOOL)scanInt:(*int)arg0 ;
-(BOOL)scanLongLong:(*NSInteger)arg0 ;
-(NSUInteger)scanLocation;
-(id)_invertedSkipSet;
-(id)charactersToBeSkipped;
-(id)initWithString:(id)arg0 ;
-(id)locale;
-(id)string;
-(void)dealloc;
-(void)setCaseSensitive:(BOOL)arg0 ;
-(void)setCharactersToBeSkipped:(id)arg0 ;
-(void)setLocale:(id)arg0 ;
-(void)setScanLocation:(NSUInteger)arg0 ;


@end


#endif