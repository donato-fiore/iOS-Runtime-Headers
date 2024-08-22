// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFADDANDSETUPNEWACCESSORIESHANDLER_H
#define HFADDANDSETUPNEWACCESSORIESHANDLER_H


#import <Foundation/Foundation.h>


@interface HFAddAndSetupNewAccessoriesHandler : NSObject

@property (nonatomic) BOOL isAccessorySetupActive; // ivar: _isAccessorySetupActive


+(id)addAndSetupNewAccessoriesForHome:(id)arg0 room:(id)arg1 ;
+(id)sharedHandler;
-(id)init;


@end


#endif