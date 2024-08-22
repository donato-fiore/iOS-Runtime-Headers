// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSURLDATAPARSER_H
#define BCSURLDATAPARSER_H

@class NSString;
@protocol BCSDataParser;

#import <Foundation/Foundation.h>


@interface BCSURLDataParser : NSObject <BCSDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg0 ;
+(id)_canonicalizeMessageURL:(id)arg0 ;
+(id)parseString:(id)arg0 ;
+(id)parseURL:(id)arg0 ;
+(id)parseURL:(id)arg0 originalString:(id)arg1 ;


@end


#endif