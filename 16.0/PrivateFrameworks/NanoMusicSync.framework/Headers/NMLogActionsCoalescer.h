// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMLOGACTIONSCOALESCER_H
#define NMLOGACTIONSCOALESCER_H

@class NSMutableArray, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface NMLogActionsCoalescer : NSObject {
    NSMutableArray *_pendingLogActions;
    id *_identifier;
    NSObject<OS_os_log> *_category;
    NSUInteger _partNumber;
}


@property (nonatomic) NSUInteger messageBufferLimit; // ivar: _messageBufferLimit
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix


-(id)_logMessageFromPendingLogActions:(id)arg0 includingPartNumber:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg0 logCategory:(id)arg1 ;
-(void)_addAction:(id)arg0 toPendingActions:(id)arg1 limit:(NSUInteger)arg2 ;
-(void)_writeLogMessageFromActions:(id)arg0 includingPartNumber:(BOOL)arg1 ;
-(void)addLogAction:(id)arg0 ;
-(void)flush;


@end


#endif