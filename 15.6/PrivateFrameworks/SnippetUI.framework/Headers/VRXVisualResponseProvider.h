// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VRXVISUALRESPONSEPROVIDER_H
#define VRXVISUALRESPONSEPROVIDER_H


#import <Foundation/Foundation.h>

#import "_TtC9SnippetUI22VisualResponseProvider.h"

@interface VRXVisualResponseProvider : NSObject

@property (readonly) _TtC9SnippetUI22VisualResponseProvider *provider; // ivar: _provider


+(id)transformModel:(id)arg0 mode:(NSInteger)arg1 currentIdiom:(NSInteger)arg2 ;
-(id)init;
-(id)transformModel:(id)arg0 mode:(NSInteger)arg1 ;
-(id)viewControllerForModel:(id)arg0 mode:(NSInteger)arg1 ;
-(id)viewForModel:(id)arg0 mode:(NSInteger)arg1 ;


@end


#endif