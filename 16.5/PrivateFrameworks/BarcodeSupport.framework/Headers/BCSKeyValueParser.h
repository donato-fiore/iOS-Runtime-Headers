// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSKEYVALUEPARSER_H
#define BCSKEYVALUEPARSER_H

@class NSString, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface BCSKeyValueParser : NSObject {
    NSString *_string;
    NSUInteger _currentIndex;
    NSUInteger _stringLength;
    NSMutableDictionary *_keyValuePairs;
}


@property (readonly, copy, nonatomic) NSDictionary *keyValuePairs;


-(BOOL)_parseNextKeyValuePair;
-(NSUInteger)_indexOfDelimiter:(id)arg0 range:(struct _NSRange )arg1 ;
-(NSUInteger)_numberOfPreviousBackSlashesFromIndex:(NSUInteger)arg0 withinRange:(struct _NSRange )arg1 ;
-(id)initWithString:(id)arg0 startIndex:(NSUInteger)arg1 ;


@end


#endif