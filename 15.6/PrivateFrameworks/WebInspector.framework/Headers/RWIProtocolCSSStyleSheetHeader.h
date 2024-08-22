// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCSSSTYLESHEETHEADER_H
#define RWIPROTOCOLCSSSTYLESHEETHEADER_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) BOOL isInline;
@property (nonatomic) NSInteger origin;
@property (copy, nonatomic) NSString *sourceURL;
@property (nonatomic) CGFloat startColumn;
@property (nonatomic) CGFloat startLine;
@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSString *title;


-(id)initWithStyleSheetId:(id)arg0 frameId:(id)arg1 sourceURL:(id)arg2 origin:(NSInteger)arg3 title:(id)arg4 disabled:(BOOL)arg5 isInline:(BOOL)arg6 startLine:(CGFloat)arg7 startColumn:(CGFloat)arg8 ;


@end


#endif