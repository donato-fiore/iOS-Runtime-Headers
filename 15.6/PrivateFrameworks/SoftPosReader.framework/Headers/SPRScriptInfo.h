// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRSCRIPTINFO_H
#define SPRSCRIPTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SPRScriptInfo : NSObject

@property (readonly, nonatomic) unsigned int apduCount; // ivar: _apduCount
@property (readonly, nonatomic) NSUInteger scriptID; // ivar: _scriptID
@property (readonly, nonatomic) NSString *scriptName; // ivar: _scriptName


-(id)initWithScriptID:(NSUInteger)arg0 scriptName:(id)arg1 apduCount:(unsigned int)arg2 ;


@end


#endif