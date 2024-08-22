// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDUMPCONTEXT_H
#define BRCDUMPCONTEXT_H

@class NSDate, PQLConnection, NSString;

#import <Foundation/Foundation.h>

#import "BRCDumper.h"
#import "brc_task_tracker.h"

@interface BRCDumpContext : NSObject {
    NSInteger _indentation;
    BRCDumper *_dumper;
    NSDate *_nowDate;
}


@property (readonly, nonatomic) PQLConnection *db; // ivar: _db
@property (nonatomic) BOOL dumpTrackedPendingDownloads; // ivar: _dumpTrackedPendingDownloads
@property (readonly, nonatomic) *__sFILE fp; // ivar: _fp
@property (retain, nonatomic) NSString *indentationBaseString; // ivar: _indentationBaseString
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL liveDaemon; // ivar: _liveDaemon
@property (nonatomic) BOOL onlyActiveStuff; // ivar: _onlyActiveStuff
@property (retain, nonatomic) brc_task_tracker *taskTracker; // ivar: _taskTracker


+(NSInteger)nowFromContext:(id)arg0 ;
+(id)highlightedString:(id)arg0 type:(NSInteger)arg1 context:(id)arg2 ;
+(id)nowDateFromContext:(id)arg0 ;
+(id)stringFromByteCount:(NSInteger)arg0 context:(id)arg1 ;
+(id)stringFromByteCount:(NSInteger)arg0 showActualByteCount:(BOOL)arg1 suffix:(id)arg2 context:(id)arg3 ;
+(id)stringFromCount:(NSInteger)arg0 context:(id)arg1 ;
+(id)stringFromCount:(NSInteger)arg0 showActualCount:(BOOL)arg1 suffix:(id)arg2 isByteCount:(BOOL)arg3 context:(id)arg4 ;
+(id)stringFromDueDate:(id)arg0 allowsPast:(BOOL)arg1 context:(id)arg2 ;
+(id)stringFromDueStamp:(NSInteger)arg0 allowsPast:(BOOL)arg1 context:(id)arg2 ;
+(id)stringFromError:(id)arg0 context:(id)arg1 ;
+(id)stringFromErrorString:(id)arg0 context:(id)arg1 ;
+(id)stringFromInterval:(CGFloat)arg0 context:(id)arg1 ;
+(id)stringFromItemAsString:(id)arg0 context:(id)arg1 ;
+(id)stringFromItemID:(id)arg0 context:(id)arg1 ;
+(id)stringFromOperationUUID:(unsigned char)arg0 context:(id)arg1 ;
+(id)stringFromThrottleState:(int)arg0 context:(id)arg1 ;
-(id)highlightedString:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithDumper:(id)arg0 ;
-(id)initWithFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(void)popIndentation;
-(void)pushIndentation;
-(void)writeLineWithFormat:(id)arg0 ;


@end


#endif