// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDCOMMANDLINEOPTION_H
#define AMDCOMMANDLINEOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMDCommandLineOption : NSObject

@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) NSString *helpText; // ivar: _helpText
@property (nonatomic) BOOL isBool; // ivar: _isBool
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *shortName; // ivar: _shortName


-(id)initWithName:(id)arg0 withDefaultValue:(id)arg1 withHelpText:(id)arg2 withShortName:(id)arg3 andIsBoolFlag:(BOOL)arg4 ;


@end


#endif