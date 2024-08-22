// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETOKENSTACK_H
#define RETOKENSTACK_H

@class NSMutableArray, NSString;
@protocol REBacktrackingTokenBuffer, RETokenBuffer;

#import <Foundation/Foundation.h>

#import "REScriptToken.h"

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer>

 {
    id<RETokenBuffer> *_buffer;
    NSUInteger _position;
    NSMutableArray *_tokenStack;
    NSMutableArray *_positionStack;
}


@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTokenBuffer:(id)arg0 ;
-(void)consume;
-(void)next;
-(void)pop;
-(void)push;


@end


#endif