// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AALOGINCONTEXTTRANSIENTSTORAGE_H
#define AALOGINCONTEXTTRANSIENTSTORAGE_H

@class NSLock;

#import <Foundation/Foundation.h>


@interface AALoginContextTransientStorage : NSObject {
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}




+(id)sharedStorage;
-(id)_keychainItemForUsername:(id)arg0 service:(id)arg1 ;
-(id)_readNonsensitiveParameters;
-(id)init;
-(id)storedContext;
-(void)_deleteKeychainItemForUsername:(id)arg0 service:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg0 forUsername:(id)arg1 service:(id)arg2 ;
-(void)_saveNonsensitiveParameters:(id)arg0 ;
-(void)clear;
-(void)save:(id)arg0 ;


@end


#endif