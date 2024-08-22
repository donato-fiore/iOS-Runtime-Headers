// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSGENERALLOGCOLLECTOR_H
#define DSGENERALLOGCOLLECTOR_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface DSGeneralLogCollector : NSObject

@property (retain, nonatomic) NSDictionary *friendlyAppNamesDictionary; // ivar: _friendlyAppNamesDictionary
@property (retain, nonatomic) NSArray *logFiles; // ivar: _logFiles
@property (retain, nonatomic) NSArray *logIDs; // ivar: _logIDs


+(id)latestRootLog;
+(id)latestUserLog;
-(id)initWithLogIDs:(id)arg0 ;
-(id)logFilesFromEnumerator:(id)arg0 ;
-(void)enumerateLogLinesWithBlock:(id)arg0 ;
-(void)getLogFiles;


@end


#endif