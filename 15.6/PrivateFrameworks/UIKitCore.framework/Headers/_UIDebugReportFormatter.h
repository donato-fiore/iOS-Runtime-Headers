// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEBUGREPORTFORMATTER_H
#define _UIDEBUGREPORTFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIDebugReportFormatter : NSObject

@property (nonatomic) NSUInteger extraBodyIndentLevel; // ivar: _extraBodyIndentLevel
@property (nonatomic) NSUInteger indentLevel; // ivar: _indentLevel
@property (copy, nonatomic) NSString *indentString; // ivar: _indentString


+(id)defaultFormatter;
-(id)init;
-(id)stringFromReportComponents:(id)arg0 ;


@end


#endif