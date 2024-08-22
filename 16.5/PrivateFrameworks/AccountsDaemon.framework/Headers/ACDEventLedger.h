// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDEVENTLEDGER_H
#define ACDEVENTLEDGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ACDEventLedger : NSObject {
    char * _crashInfoString;
}


@property (retain) NSMutableArray *eventLedger; // ivar: _eventLedger


+(id)sharedLedger;
-(id)historyDescription;
-(id)init;
-(void)recordEvent:(id)arg0 ;
-(void)simulateCrashWithMessage:(id)arg0 ;


@end


#endif