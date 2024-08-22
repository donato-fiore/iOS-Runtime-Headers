// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6TIPSUI16TIPSCONTENTMODEL_H
#define _TTC6TIPSUI16TIPSCONTENTMODEL_H


#import <Foundation/Foundation.h>


@interface _TtC6TipsUI16TipsContentModel : NSObject {
    ? colorScheme;
    ? _loading;
    ? _hasLoaded;
    ? _collections;
    ? _contentLoadErrorType;
    ? _currentTip;
    ? _featuredTip;
    ? _featuredCollection;
    ? currentTipList;
    ? prefetchingManager;
    ? appController;
    ? $__lazy_storage_$_featuredTipController;
    ? contentDidUpdate;
    ? networkDidChangeToReachable;
}




-(id)init;


@end


#endif