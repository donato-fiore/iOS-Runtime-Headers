// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIDEVICECELLULARSTATE_H
#define PSUIDEVICECELLULARSTATE_H


#import <Foundation/Foundation.h>


@interface PSUIDeviceCellularState : NSObject



+(id)sharedInstance;
-(BOOL)isConnectedOverCellular;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif