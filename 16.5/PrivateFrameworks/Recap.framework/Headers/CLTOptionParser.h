// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLTOPTIONPARSER_H
#define CLTOPTIONPARSER_H

@class NSArray, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CLTOption.h"

@interface CLTOptionParser : NSObject

@property (retain, nonatomic) NSArray *additionalHelpLines; // ivar: _additionalHelpLines
@property (retain, nonatomic) CLTOption *defaultHelpOption; // ivar: _defaultHelpOption
@property (retain, nonatomic) CLTOption *defaultVersionOption; // ivar: _defaultVersionOption
@property (retain, nonatomic) NSArray *inputArguments; // ivar: _inputArguments
@property (retain, nonatomic) NSString *introductionaryDescription; // ivar: _introductionaryDescription
@property (retain, nonatomic) NSMutableArray *options; // ivar: _options
@property (retain, nonatomic) NSArray *remainingArguments; // ivar: _remainingArguments
@property (nonatomic) BOOL succeedWithUnkownFlags; // ivar: _succeedWithUnkownFlags
@property (nonatomic) BOOL succeedWithoutArguments; // ivar: _succeedWithoutArguments
@property (retain, nonatomic) NSString *toolName; // ivar: _toolName
@property (retain, nonatomic) NSString *usageOptionsDescription; // ivar: _usageOptionsDescription
@property (readonly, nonatomic) NSString *versionLine;
@property (retain, nonatomic) NSString *versionString; // ivar: _versionString


-(id)helpString;
-(id)init;
-(id)initWithArguments:(id)arg0 ;
-(id)parse;
-(id)usageLine;
-(id)usageString;
-(int)parseWithSuccessHandler:(id)arg0 ;
-(void)addOption:(id)arg0 ;
-(void)removeAllOptions;


@end


#endif