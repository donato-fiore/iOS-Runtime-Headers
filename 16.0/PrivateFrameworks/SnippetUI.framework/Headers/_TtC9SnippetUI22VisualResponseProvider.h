// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SNIPPETUI22VISUALRESPONSEPROVIDER_H
#define _TTC9SNIPPETUI22VISUALRESPONSEPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC9SnippetUI22VisualResponseProvider : NSObject



+(id)transformModel:(id)arg0 mode:(NSInteger)arg1 currentIdiom:(NSInteger)arg2 ;
+(void)setPatternId:(id)arg0 forViewId:(id)arg1 ;
-(id)init;
-(id)viewControllerForModel:(id)arg0 mode:(NSInteger)arg1 ;
-(id)viewForModel:(id)arg0 mode:(NSInteger)arg1 overload:(NSInteger)arg2 ;
-(void)reset;
-(void)viewControllerFor:(id)arg0 mode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif