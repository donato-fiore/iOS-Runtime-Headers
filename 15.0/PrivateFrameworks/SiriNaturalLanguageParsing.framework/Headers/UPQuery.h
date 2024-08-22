// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPQUERY_H
#define UPQUERY_H

@class NSString, NSDictionary, NSArray, NSUUID;
@protocol SIRINLUSystemDialogAct><NSObject;

#import <Foundation/Foundation.h>


@interface UPQuery : NSObject {
    NSString *__utterance;
}


@property (readonly) NSObject<SIRINLUSystemDialogAct><NSObject> *dialogAct; // ivar: _dialogAct
@property (copy) NSDictionary *embeddingsByToken; // ivar: _embeddingsByToken
@property (readonly, copy) NSArray *spans; // ivar: _spans
@property (copy) NSArray *tokens; // ivar: _tokens
@property (readonly, copy) NSString *utterance;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


-(id)initWithTokens:(id)arg0 embeddingsByToken:(id)arg1 spans:(id)arg2 dialogAct:(id)arg3 ;
-(void)enumerateSpansWithType:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif