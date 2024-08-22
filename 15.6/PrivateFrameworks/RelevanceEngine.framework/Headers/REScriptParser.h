// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTPARSER_H
#define RESCRIPTPARSER_H

@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

#import <Foundation/Foundation.h>


@interface REScriptParser : NSObject {
    id<REBacktrackingTokenBuffer> *_buffer;
}


@property (weak, nonatomic) NSObject<REScriptParserDelegate> *delegate; // ivar: _delegate


-(id)initWithBacktrackingBuffer:(id)arg0 ;
-(id)parse;


@end


#endif