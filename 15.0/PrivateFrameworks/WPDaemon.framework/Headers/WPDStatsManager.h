// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDSTATSMANAGER_H
#define WPDSTATSMANAGER_H

@class NSMutableArray, NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WPDaemonServer.h"

@interface WPDStatsManager : NSObject

@property (readonly, nonatomic) BOOL PLLogAvailable; // ivar: _PLLogAvailable
@property (retain, nonatomic) NSMutableArray *advertisingArray; // ivar: _advertisingArray
@property (retain, nonatomic) NSMutableArray *aggressiveScanArray; // ivar: _aggressiveScanArray
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat nextPushTime; // ivar: _nextPushTime
@property (retain, nonatomic) NSMutableArray *regularScanArray; // ivar: _regularScanArray
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue; // ivar: _reportQueue
@property *NSUInteger resetAdvertisingArray; // ivar: _resetAdvertisingArray
@property *NSUInteger resetScanArray; // ivar: _resetScanArray
@property (retain, nonatomic) NSDictionary *scanArray; // ivar: _scanArray
@property (readonly, weak) WPDaemonServer *server; // ivar: _server


+(id)getStringFromActivity:(NSUInteger)arg0 ;
-(id)description;
-(id)generateStateDumpStrings;
-(id)getStatsDictionary;
-(id)initWithServer:(id)arg0 ;
-(void)dealloc;
-(void)generateStateDump;
-(void)reportPLStats;
-(void)resetActivity:(NSUInteger)arg0 forType:(unsigned char)arg1 ;
-(void)resetActivityAsync:(NSUInteger)arg0 forType:(unsigned char)arg1 ;
-(void)startActivity:(NSUInteger)arg0 forType:(unsigned char)arg1 ;
-(void)startActivity:(NSUInteger)arg0 forType:(unsigned char)arg1 scanRate:(NSInteger)arg2 ;
-(void)startActivityAsync:(NSUInteger)arg0 forType:(unsigned char)arg1 ;
-(void)startActivityAsync:(NSUInteger)arg0 forType:(unsigned char)arg1 scanRate:(NSInteger)arg2 ;
-(void)stopActivity:(NSUInteger)arg0 ;
-(void)stopActivity:(NSUInteger)arg0 forType:(unsigned char)arg1 ;
-(void)stopActivityAsync:(NSUInteger)arg0 ;
-(void)stopActivityAsync:(NSUInteger)arg0 forType:(unsigned char)arg1 ;


@end


#endif