// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLEVENTFILTER_H
#define CKLEVENTFILTER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CKLEventFilter : NSObject

@property (retain, nonatomic) NSDictionary *categoriesBySubsystem; // ivar: _categoriesBySubsystem
@property (nonatomic) NSUInteger logTypes; // ivar: _logTypes
@property (nonatomic) BOOL onlyTestLogs; // ivar: _onlyTestLogs
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) BOOL simulatorMessagesOnly; // ivar: _simulatorMessagesOnly


-(BOOL)hasLogType:(NSUInteger)arg0 ;
-(BOOL)hasOnlyLogType:(NSUInteger)arg0 ;
-(BOOL)matchesEvent:(id)arg0 ;
-(id)initWithLogTypes:(NSUInteger)arg0 ;
-(void)_initFilterDict;


@end


#endif