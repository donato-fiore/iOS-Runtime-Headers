// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSUGGESTIONSWORKGROUPMANAGER_H
#define SGSUGGESTIONSWORKGROUPMANAGER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface SGSuggestionsWorkGroupManager : NSObject {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(id)_init;
-(void)finishProcessingForUniqueIdentifier:(id)arg0 ;
-(void)waitForUniqueIdentifierToProcess:(id)arg0 ;
-(void)waitForUniqueIdentifierToProcess:(id)arg0 withTimeout:(CGFloat)arg1 ;


@end


#endif