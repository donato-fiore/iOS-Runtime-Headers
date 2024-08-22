// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAENDOFARTICLEMODULE_H
#define NAENDOFARTICLEMODULE_H

@protocol NAEndOfArticleModuleType;

#import <Foundation/Foundation.h>


@interface NAEndOfArticleModule : NSObject <NAEndOfArticleModuleType>

 {
    ? resolver;
    ? tracker;
    ? contextBuilder;
}




-(id)createViewControllerFor:(id)arg0 presentationOptions:(id)arg1 ;
-(id)init;


@end


#endif