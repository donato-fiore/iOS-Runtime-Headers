// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDHOMEMANAGERUTILITIES_H
#define _CDHOMEMANAGERUTILITIES_H

@class HMHomeManager, CNContactStore, NSString;
@protocol HMHomeManagerDelegate;

#import <Foundation/Foundation.h>


@interface _CDHomeManagerUtilities : NSObject <HMHomeManagerDelegate>

 {
    HMHomeManager *_homeManager;
    CNContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)contactKeysToFetch;
-(id)contactsInHome;
-(id)init;


@end


#endif