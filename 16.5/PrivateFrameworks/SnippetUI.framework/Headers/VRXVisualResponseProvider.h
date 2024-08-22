// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VRXVISUALRESPONSEPROVIDER_H
#define VRXVISUALRESPONSEPROVIDER_H


#import <Foundation/Foundation.h>

#import "_TtC9SnippetUI22VisualResponseProvider.h"

@interface VRXVisualResponseProvider : NSObject

@property (readonly) _TtC9SnippetUI22VisualResponseProvider *provider; // ivar: _provider


+(id)transformModel:(id)arg0 mode:(NSInteger)arg1 currentIdiom:(NSInteger)arg2 ;
+(void)preWarm:(id)arg0 ;
+(void)setPatternId:(id)arg0 forViewId:(id)arg1 ;
-(id)init;
-(id)transformModel:(id)arg0 mode:(NSInteger)arg1 ;
-(id)viewControllerForModel:(id)arg0 mode:(NSInteger)arg1 ;
-(id)viewForModel:(id)arg0 mode:(NSInteger)arg1 ;
-(void)reset;
-(void)viewControllerForModel:(id)arg0 mode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif