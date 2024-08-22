// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMNLQUERYPARSER_H
#define REMNLQUERYPARSER_H

@class NSTimeZone, NSLocale, NSDate;

#import <Foundation/Foundation.h>


@interface REMNLQueryParser : NSObject {
    BOOL _forTesting;
    NSTimeZone *_timeZone;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


-(id)initWithLocale:(id)arg0 referenceDate:(id)arg1 referenceTimeZone:(id)arg2 forTesting:(BOOL)arg3 ;
-(id)parseString:(id)arg0 ;
-(id)parserManagerTestOptions;


@end


#endif