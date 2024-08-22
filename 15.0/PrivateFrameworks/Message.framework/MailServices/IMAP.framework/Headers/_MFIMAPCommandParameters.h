// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFIMAPCOMMANDPARAMETERS_H
#define _MFIMAPCOMMANDPARAMETERS_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "MFIMAPResponseConsumer.h"

@interface _MFIMAPCommandParameters : NSObject

@property (retain, nonatomic) NSArray *arguments; // ivar: _arguments
@property (nonatomic) int command; // ivar: _command
@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer; // ivar: _responseConsumer
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSMutableArray *untaggedResponses; // ivar: _untaggedResponses


-(id)initWithCommand:(int)arg0 ;
-(id)initWithCommand:(int)arg0 arguments:(id)arg1 ;
-(id)initWithCommand:(int)arg0 sequenceNumber:(NSUInteger)arg1 ;


@end


#endif