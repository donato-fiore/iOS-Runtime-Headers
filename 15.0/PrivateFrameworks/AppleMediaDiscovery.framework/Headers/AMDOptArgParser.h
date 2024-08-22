// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDOPTARGPARSER_H
#define AMDOPTARGPARSER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AMDOptArgParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *options; // ivar: _options
@property (retain, nonatomic) NSMutableDictionary *parsedOptArgs; // ivar: _parsedOptArgs
@property (retain, nonatomic) NSMutableDictionary *shortOptions; // ivar: _shortOptions


-(id)getValueForOption:(id)arg0 ;
-(id)initWithOptArgs:(id)arg0 ;
-(id)parseArgs:(id)arg0 ;
-(void)showHelp;


@end


#endif