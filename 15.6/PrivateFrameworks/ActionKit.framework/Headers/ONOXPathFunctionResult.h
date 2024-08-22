// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ONOXPATHFUNCTIONRESULT_H
#define ONOXPATHFUNCTIONRESULT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface ONOXPathFunctionResult : NSObject

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) CGFloat numericValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (nonatomic) *_xmlXPathObject xmlXPath; // ivar: _xmlXPath


-(void)dealloc;


@end


#endif