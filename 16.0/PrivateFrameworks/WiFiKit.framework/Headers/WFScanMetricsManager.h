// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSCANMETRICSMANAGER_H
#define WFSCANMETRICSMANAGER_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface WFScanMetricsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionCounts; // ivar: _sectionCounts
@property (nonatomic) BOOL submited; // ivar: _submited
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)init;
-(id)sectionNameForRecord:(id)arg0 ;
-(void)ingestScanResults:(id)arg0 ;
-(void)reset;
-(void)submit;


@end


#endif