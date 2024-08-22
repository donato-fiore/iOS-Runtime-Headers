// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMKAPPA_H
#define CMKAPPA_H


#import <Foundation/Foundation.h>


@interface CMKappa : NSObject



+(BOOL)areStatsAvailable;
-(int)getState;
-(void)sendAPCmd:(int)arg0 arg:(int)arg1 ;


@end


#endif