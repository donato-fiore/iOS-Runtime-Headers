// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCALENDAREVENTPARSER_H
#define BCSCALENDAREVENTPARSER_H

@class NSString;
@protocol BCSDataParser;

#import <Foundation/Foundation.h>


@interface BCSCalendarEventParser : NSObject <BCSDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_validatedICSString:(id)arg0 ;
+(id)parseString:(id)arg0 ;


@end


#endif