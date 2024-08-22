// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICNAACCOUNTREPORTTODEVICE_H
#define _ICNAACCOUNTREPORTTODEVICE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ICNAAccountReportToDevice : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAccountsByType; // ivar: _countOfAccountsByType
@property (retain, nonatomic) NSMutableDictionary *countOfNotesByType; // ivar: _countOfNotesByType


-(id)accountTypeSummary;
-(id)init;
-(void)reportAccountType:(NSInteger)arg0 noteCount:(NSUInteger)arg1 ;


@end


#endif