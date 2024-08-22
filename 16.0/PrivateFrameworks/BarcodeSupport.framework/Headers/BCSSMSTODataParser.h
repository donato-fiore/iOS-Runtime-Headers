// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSSMSTODATAPARSER_H
#define BCSSMSTODATAPARSER_H

@class NSString;
@protocol BCSDataParser;

#import <Foundation/Foundation.h>


@interface BCSSMSTODataParser : NSObject <BCSDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parseString:(id)arg0 ;


@end


#endif