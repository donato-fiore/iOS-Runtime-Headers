// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKXMLERRORHANDLERCONTEXT_H
#define IKXMLERRORHANDLERCONTEXT_H

@class NSString, NSMutableString, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface IKXMLErrorHandlerContext : NSObject

@property (readonly, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSMutableString *mutableErrorMessages; // ivar: _mutableErrorMessages
@property (retain, nonatomic) NSMutableSet *mutableParserErrors; // ivar: _mutableParserErrors
@property (readonly, nonatomic) NSArray *parserErrors;


-(id)init;
-(void)clear;


@end


#endif