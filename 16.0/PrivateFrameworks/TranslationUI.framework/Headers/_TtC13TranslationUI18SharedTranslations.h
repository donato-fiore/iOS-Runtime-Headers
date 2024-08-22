// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TRANSLATIONUI18SHAREDTRANSLATIONS_H
#define _TTC13TRANSLATIONUI18SHAREDTRANSLATIONS_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtC13TranslationUI18SharedTranslations : NSObject <NSFilePresenter>

 {
    ? presentedItemURL;
    ? _translations;
    ? fileAccessQueue;
}


@property (nonatomic, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: presentedItemOperationQueue
@property (nonatomic, copy) NSURL *presentedItemURL;


-(id)init;
-(void)dealloc;
-(void)presentedItemDidChange;


@end


#endif