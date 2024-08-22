// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLSTREAMOBSERVER_H
#define CKLSTREAMOBSERVER_H

@class NSDateFormatter, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CKLEventFilter.h"

@interface CKLStreamObserver : NSObject

@property (nonatomic) BOOL colorOutput; // ivar: _colorOutput
@property (retain, nonatomic) CKLEventFilter *filter; // ivar: _filter
@property (readonly, nonatomic) NSDateFormatter *formatter; // ivar: _formatter
@property (nonatomic) BOOL onlyTestLogs;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSMutableDictionary *processNamesByPath; // ivar: _processNamesByPath
@property (nonatomic) BOOL simulatorOnly;


-(id)_processNameForPath:(id)arg0 ;
-(id)initWithLogTypes:(NSUInteger)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)eventMatched:(id)arg0 ;
-(void)finish;


@end


#endif