// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLOGXMLFORMATTER_H
#define CALLOGXMLFORMATTER_H

@class NSString;
@protocol CalLogFormatter;

#import <Foundation/Foundation.h>


@interface CalLogXMLFormatter : NSObject <CalLogFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPrettyPrint; // ivar: _shouldPrettyPrint
@property (readonly) Class superclass;
@property (nonatomic) BOOL useTinyElementNames; // ivar: _useTinyElementNames


-(id)init;
-(id)newFormattedString:(id)arg0 ;


@end


#endif