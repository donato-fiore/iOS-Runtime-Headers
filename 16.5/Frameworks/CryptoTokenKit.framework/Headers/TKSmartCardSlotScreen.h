// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSMARTCARDSLOTSCREEN_H
#define TKSMARTCARDSLOTSCREEN_H


#import <Foundation/Foundation.h>


@interface TKSmartCardSlotScreen : NSObject

@property NSInteger physicalColumnCount; // ivar: _physicalColumnCount
@property NSInteger physicalRowCount; // ivar: _physicalRowCount
@property NSInteger virtualColumnCount; // ivar: _virtualColumnCount
@property NSInteger virtualRowCount; // ivar: _virtualRowCount


-(BOOL)displayMessage:(id)arg0 x:(NSInteger)arg1 y:(NSInteger)arg2 duration:(CGFloat)arg3 clearScreen:(BOOL)arg4 ;


@end


#endif