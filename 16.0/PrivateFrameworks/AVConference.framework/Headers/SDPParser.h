// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDPPARSER_H
#define SDPPARSER_H

@class NSArray, NSEnumerator, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SDPParser : NSObject {
    NSArray *_lines;
    NSEnumerator *_lineEnumerator;
    NSDictionary *_fieldNameMap;
}


@property (readonly, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, nonatomic) unsigned char fieldType; // ivar: _fieldType
@property (readonly, nonatomic) NSString *fieldValue; // ivar: _fieldValue
@property (readonly, nonatomic) BOOL parsingDone; // ivar: _parsingDone


-(BOOL)nextLine;
-(BOOL)parseMediaLineHeader:(id)arg0 mediaType:(*int)arg1 supportedPayloads:(id)arg2 rtpPort:(*int)arg3 ;
-(id)initWithString:(id)arg0 ;
-(int)stringToMediaType:(id)arg0 ;
-(void)dealloc;


@end


#endif