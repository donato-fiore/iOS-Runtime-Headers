// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITEXTCHECKER_H
#define TITEXTCHECKER_H

@protocol _TIUITextChecking;

#import <Foundation/Foundation.h>


@interface TITextChecker : NSObject

@property (readonly, nonatomic) NSObject<_TIUITextChecking> *checker; // ivar: _checker


+(id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg0 ;
-(BOOL)doneLoading;
-(id)init;
-(id)initWithAsynchronousLoading:(BOOL)arg0 ;
-(struct _NSRange )checkSpellingOfString:(id)arg0 startingAt:(NSInteger)arg1 language:(id)arg2 wrap:(BOOL)arg3 correction:(*id)arg4 ;


@end


#endif