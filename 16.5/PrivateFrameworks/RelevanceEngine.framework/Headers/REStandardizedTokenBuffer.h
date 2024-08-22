// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESTANDARDIZEDTOKENBUFFER_H
#define RESTANDARDIZEDTOKENBUFFER_H

@class NSString;
@protocol RETokenBuffer;

#import <Foundation/Foundation.h>

#import "REScriptToken.h"

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer>

 {
    id<RETokenBuffer> *_buffer;
}


@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTokenBuffer:(id)arg0 ;
-(void)_cleanTokens;
-(void)next;


@end


#endif