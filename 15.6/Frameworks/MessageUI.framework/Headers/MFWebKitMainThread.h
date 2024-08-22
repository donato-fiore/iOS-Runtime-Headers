// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFWEBKITMAINTHREAD_H
#define MFWEBKITMAINTHREAD_H

@class MFLock;

#import <Foundation/Foundation.h>


@interface MFWebKitMainThread : NSObject {
    *__CFDictionary _visibleDict;
    MFLock *_visibleDictLock;
}




+(id)sharedInstance;
-(id)init;
-(int)dictValueForMimeType:(id)arg0 ;
-(void)_mainThreadPopulateDictForMimeType:(id)arg0 ;
-(void)dealloc;


@end


#endif