// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATPATTERN_H
#define CATPATTERN_H


#import <Foundation/Foundation.h>


@interface CATPattern : NSObject



+(id)executeCAT:(id)arg0 templateDir:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg1 catId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg2 patternId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg3 requestType:(int)arg4 parameters:(id)arg5 globals:(id)arg6 patternContext:(struct shared_ptr<siri::dialogengine::PatternContext> )arg7 callback:(id)arg8 options:(int)arg9 error:(*id)arg10 ;
+(id)patternNameFromType:(NSUInteger)arg0 ;
+(id)segment:(id)arg0 settings:(id)arg1 ;
+(void)execute:(id)arg0 patternId:(id)arg1 parameters:(id)arg2 globals:(id)arg3 callback:(id)arg4 options:(int)arg5 completion:(id)arg6 ;
+(void)execute:(id)arg0 patternId:(id)arg1 parameters:(id)arg2 globals:(id)arg3 options:(int)arg4 completion:(id)arg5 ;
+(void)execute:(id)arg0 templateDir:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id)arg7 ;
+(void)execute:(id)arg0 templateDir:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 options:(int)arg5 completion:(id)arg6 ;
+(void)load:(id)arg0 patternId:(id)arg1 completion:(id)arg2 ;
+(void)load:(id)arg0 patternId:(id)arg1 options:(int)arg2 completion:(id)arg3 ;


@end


#endif