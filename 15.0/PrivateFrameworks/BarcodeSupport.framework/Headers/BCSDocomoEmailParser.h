// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOCOMOEMAILPARSER_H
#define BCSDOCOMOEMAILPARSER_H

@class NSString;
@protocol BCSDataParser;

#import <Foundation/Foundation.h>


@interface BCSDocomoEmailParser : NSObject <BCSDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parseString:(id)arg0 ;


@end


#endif