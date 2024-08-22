// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICONTEXTTOKENS_H
#define TICONTEXTTOKENS_H


#import <Foundation/Foundation.h>


@interface TIContextTokens : NSObject

@property (nonatomic) *void context; // ivar: _context


-(*void)lmContext;
-(NSUInteger)size;
-(id)init;
-(id)initWithContext:(struct TITokenID *)arg0 contextLength:(NSUInteger)arg1 contextStringTokens:(id)arg2 ;
-(struct TITokenID *)begin;
-(void)appendToken:(struct TITokenID )arg0 string:(id)arg1 ;
-(void)clear;
-(void)dealloc;
-(void)popBack;


@end


#endif