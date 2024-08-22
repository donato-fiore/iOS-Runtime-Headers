// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSPANMATCHER_H
#define KVSPANMATCHER_H

@protocol KVSkitAccessProvider;

#import <Foundation/Foundation.h>

#import "KVSpanMatchResultInterpreter.h"

@interface KVSpanMatcher : NSObject {
    NSObject<KVSkitAccessProvider> *_skitProvider;
    KVSpanMatchResultInterpreter *_interpreter;
}




+(id)indexMatcher;
+(id)itemMatcher:(id)arg0 locale:(id)arg1 ;
+(id)itemMatcher:(id)arg0 tokenizer:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)setItems:(id)arg0 error:(*id)arg1 ;
-(id)_searchSkit:(id)arg0 userId:(id)arg1 error:(*id)arg2 ;
-(id)indexLocaleWithError:(*id)arg0 ;
-(id)indexLocaleWithUserId:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSkitAccessProvider:(id)arg0 resultInterpreter:(id)arg1 ;
-(id)matchSpans:(id)arg0 error:(*id)arg1 ;
-(id)matchSpans:(id)arg0 userId:(id)arg1 error:(*id)arg2 ;
-(void)prewarmIndexWithUserId:(id)arg0 ;


@end


#endif