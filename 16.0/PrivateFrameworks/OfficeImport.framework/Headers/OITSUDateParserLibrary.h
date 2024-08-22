// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUDATEPARSERLIBRARY_H
#define OITSUDATEPARSERLIBRARY_H

@class NSMutableArray, NSCondition;

#import <Foundation/Foundation.h>

#import "OITSULocale.h"

@interface OITSUDateParserLibrary : NSObject {
    OITSULocale *mLocale;
    NSUInteger mMaxPermittedParsers;
    NSUInteger mNumberOfUses;
    NSUInteger mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}




-(id)checkoutDateParser;
-(id)initWithLocale:(id)arg0 ;
-(void)dealloc;
-(void)prepareDateParserInBackground;
-(void)returnDateParser:(id)arg0 ;


@end


#endif