// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMNLQUERYPARSER_H
#define REMNLQUERYPARSER_H

@class NSTimeZone, NSLocale;

#import <Foundation/Foundation.h>


@interface REMNLQueryParser : NSObject {
    NSTimeZone *_timeZone;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)getParserManagerOptions;
-(id)initWithLocale:(id)arg0 referenceTimeZone:(id)arg1 ;
-(id)parseString:(id)arg0 ;


@end


#endif