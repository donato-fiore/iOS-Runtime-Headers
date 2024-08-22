// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IEVALIDATIONRESULT_H
#define IEVALIDATIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IEValidationResult : NSObject

@property (retain, nonatomic) NSString *code; // ivar: _code
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (nonatomic) int lineNumber; // ivar: _lineNumber
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;


@end


#endif