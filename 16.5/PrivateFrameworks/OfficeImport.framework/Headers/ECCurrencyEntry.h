// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECCURRENCYENTRY_H
#define ECCURRENCYENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ECCurrencyEntry : NSObject {
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;
    BOOL mAppliesToExport;
    int mXlAccountingFormat;
}




+(id)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 ;
+(id)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 accountingFormat:(int)arg3 ;
+(id)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3 ;
+(id)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3 accountingFormat:(int)arg4 ;
-(id)initWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3 accountingFormat:(int)arg4 ;


@end


#endif