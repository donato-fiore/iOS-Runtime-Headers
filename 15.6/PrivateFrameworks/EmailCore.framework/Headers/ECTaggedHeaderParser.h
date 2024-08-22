// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECTAGGEDHEADERPARSER_H
#define ECTAGGEDHEADERPARSER_H

@class NSMutableDictionary, NSError;

#import <Foundation/Foundation.h>


@interface ECTaggedHeaderParser : NSObject

@property (readonly, copy) NSMutableDictionary *headerFields; // ivar: _headerFields
@property (readonly, copy) NSError *parseError; // ivar: _parseError


+(id)taggedHeaderFromDictionary:(id)arg0 ;
-(id)_errorWithType:(NSInteger)arg0 reason:(id)arg1 ;
-(id)_parseTagValueList:(id)arg0 ;
-(id)initWithHeaderBody:(id)arg0 ;


@end


#endif