// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLIARGUMENTS_H
#define CLIARGUMENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CLIArguments : NSObject

@property (retain, nonatomic) NSArray *arguments; // ivar: _arguments


-(id)consumeUpToIndex:(NSInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif