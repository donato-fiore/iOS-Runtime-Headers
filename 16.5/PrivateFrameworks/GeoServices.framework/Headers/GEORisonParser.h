// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORISONPARSER_H
#define GEORISONPARSER_H

@class NSNumberFormatter, NSMutableCharacterSet;

#import <Foundation/Foundation.h>


@interface GEORisonParser : NSObject {
    NSNumberFormatter *_formatter;
    NSMutableCharacterSet *_risonTerminators;
    NSMutableCharacterSet *_risonEscapes;
}




-(id)arrayWithReaderInfo:(struct ? *)arg0 ;
-(id)boolWithReaderInfo:(struct ? *)arg0 ;
-(id)dictionaryWithReaderInfo:(struct ? *)arg0 ;
-(id)init;
-(id)keyWithReaderInfo:(struct ? *)arg0 ;
-(id)nullWithReaderInfo:(struct ? *)arg0 ;
-(id)numberWithReaderInfo:(struct ? *)arg0 ;
-(id)objectFromRisonString:(id)arg0 ;
-(id)objectWithReaderInfo:(struct ? *)arg0 ;
-(id)stringFromArray:(id)arg0 ;
-(id)stringFromDictionary:(id)arg0 ;
-(id)stringFromNull:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 ;
-(id)stringFromRisonObject:(id)arg0 ;
-(id)stringFromString:(id)arg0 ;
-(id)stringLiteralWithReaderInfo:(struct ? *)arg0 ;


@end


#endif