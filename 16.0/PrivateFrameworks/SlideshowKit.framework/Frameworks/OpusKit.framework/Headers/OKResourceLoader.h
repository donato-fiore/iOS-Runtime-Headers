// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKRESOURCELOADER_H
#define OKRESOURCELOADER_H


#import <Foundation/Foundation.h>


@interface OKResourceLoader : NSObject



+(id)resourceLoader;
-(BOOL)canLoadResourceWithURL:(id)arg0 ;
-(id)copyResource:(id)arg0 ;
-(id)loadResourceWithURL:(id)arg0 withPresentationViewController:(id)arg1 ;
-(void)deleteResource:(id)arg0 ;


@end


#endif