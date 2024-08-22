// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATEPARSER_H
#define SXDATEPARSER_H

@class NSString;
@protocol SXDateParser;

#import <Foundation/Foundation.h>


@interface SXDateParser : NSObject <SXDateParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dateFromString:(id)arg0 ;


@end


#endif