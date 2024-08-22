// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABSCHANGECALLBACKS_H
#define ABSCHANGECALLBACKS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABSAddressBook.h"

@interface ABSChangeCallbacks : NSObject {
    ABSAddressBook *_addressBook;
    NSMutableArray *_externalCallbacks;
    NSMutableArray *_externalCallBackThreads;
    NSMutableArray *_externalCallbackContexts;
    NSInteger _initialAccessStatus;
}




-(BOOL)hasExternalCallback:(*unk)arg0 onThread:(id)arg1 withContext:(*void)arg2 ;
-(id)initWithAddressBook:(id)arg0 ;
-(void)addExternalCallback:(*unk)arg0 onThread:(id)arg1 withContext:(*void)arg2 ;
-(void)contactStoreChanged:(id)arg0 ;
-(void)dealloc;
-(void)removeExternalCallback:(*unk)arg0 withContext:(*void)arg1 ;


@end


#endif