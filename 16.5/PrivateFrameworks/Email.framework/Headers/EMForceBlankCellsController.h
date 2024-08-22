// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFORCEBLANKCELLSCONTROLLER_H
#define EMFORCEBLANKCELLSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface EMForceBlankCellsController : NSObject



+(BOOL)shouldBlockSQLQueries;
+(BOOL)shouldBlockXPCQueue;
+(CGFloat)_blockRate;
+(CGFloat)_maximumDelay;
+(CGFloat)_minimumDelay;
+(id)log;
+(void)blockForRandomDurationWithMessage:(id)arg0 ;


@end


#endif