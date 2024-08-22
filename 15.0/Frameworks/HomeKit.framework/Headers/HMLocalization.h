// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMLOCALIZATION_H
#define HMLOCALIZATION_H

@class HMFUnfairLock, NSBundle, NSArray;

#import <Foundation/Foundation.h>


@interface HMLocalization : NSObject {
    HMFUnfairLock *_lock;
    NSBundle *_bundle;
}


@property (readonly, copy) NSArray *stringTable; // ivar: _stringTable


+(id)sharedManager;
-(id)getLocalizedOrCustomString:(id)arg0 ;
-(id)getLocalizedString:(id)arg0 ;
-(id)init;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg0 ;


@end


#endif