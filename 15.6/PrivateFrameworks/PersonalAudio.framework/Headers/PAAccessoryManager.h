// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAACCESSORYMANAGER_H
#define PAACCESSORYMANAGER_H


#import <Foundation/Foundation.h>


@interface PAAccessoryManager : NSObject

@property (nonatomic) BOOL shouldSendUpdate; // ivar: _shouldSendUpdate


+(id)sharedInstance;
-(id)init;
-(void)sendUpdateToAccessory;


@end


#endif