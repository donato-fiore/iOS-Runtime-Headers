// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DRESOURCELOADER_H
#define TSCH3DRESOURCELOADER_H


#import <Foundation/Foundation.h>


@interface TSCH3DResourceLoader : NSObject



+(id)loader;
-(BOOL)shouldReuploadHandle:(id)arg0 config:(id)arg1 ;
-(NSInteger)virtualScreenForContext:(id)arg0 ;
-(NSUInteger)uploadResource:(id)arg0 handle:(id)arg1 insideSession:(id)arg2 config:(id)arg3 ;
-(void)destroyHandle:(id)arg0 insideContext:(id)arg1 ;
-(void)postbindHandle:(id)arg0 config:(id)arg1 ;


@end


#endif