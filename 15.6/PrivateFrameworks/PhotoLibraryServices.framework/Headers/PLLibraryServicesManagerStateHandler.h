// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIBRARYSERVICESMANAGERSTATEHANDLER_H
#define PLLIBRARYSERVICESMANAGERSTATEHANDLER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLLibraryServicesManagerStateHandler : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _stateHandle;
}


@property (readonly, copy) NSString *logPrefix; // ivar: _logPrefix


-(id)initWithLibraryServicesManager:(id)arg0 ;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)dealloc;


@end


#endif