// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBTEXTREADER_H
#define PBTEXTREADER_H

@class NSCharacterSet, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PBTextReader : NSObject {
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    NSUInteger _pos;
    NSUInteger _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}




-(id)init;
-(id)readMessageType:(Class)arg0 fromString:(id)arg1 ;
-(void)dealloc;


@end


#endif