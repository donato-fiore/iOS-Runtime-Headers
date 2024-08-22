// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPINHIBITORMANAGER_H
#define _CPINHIBITORMANAGER_H

@class NSMutableDictionary, NSLock, NSArray, RBSTarget;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _CPInhibitorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *inhibitorMap; // ivar: _inhibitorMap
@property (retain, nonatomic) NSLock *inhibitorMapLock; // ivar: _inhibitorMapLock
@property (nonatomic) BOOL isProcessRunningBoardManaged; // ivar: _isProcessRunningBoardManaged
@property (retain, nonatomic) NSObject<OS_os_log> *os_log; // ivar: _os_log
@property (retain, nonatomic) NSArray *runningBoardAttributes; // ivar: _runningBoardAttributes
@property (retain, nonatomic) RBSTarget *runningBoardTarget; // ivar: _runningBoardTarget


+(id)sharedInstance;
-(id)init;
-(id)popAssertionWithIdentifier:(id)arg0 ;
-(id)startAnInhibitor;
-(void)pushAssertion:(id)arg0 withIdentifier:(id)arg1 ;
-(void)stopInhibitorWithIdentifier:(id)arg0 ;


@end


#endif