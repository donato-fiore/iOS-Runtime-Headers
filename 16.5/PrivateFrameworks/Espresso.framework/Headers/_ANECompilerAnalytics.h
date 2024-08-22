// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANECOMPILERANALYTICS_H
#define _ANECOMPILERANALYTICS_H

@class NSData, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface _ANECompilerAnalytics : NSObject

@property (readonly, nonatomic) NSData *analyticsBuffer; // ivar: _analyticsBuffer
@property (readonly, nonatomic) NSNumber *bufferSizeInBytes; // ivar: _bufferSizeInBytes
@property (retain, nonatomic) NSArray *procedureAnalytics; // ivar: _procedureAnalytics


+(id)new;
+(id)objectWithBuffer:(id)arg0 ;
-(*NSUInteger)offsetTableAt:(NSUInteger)arg0 count:(unsigned int)arg1 ;
-(BOOL)getBOOLDataValueAt:(NSUInteger)arg0 ;
-(BOOL)populateAnalytics;
-(NSUInteger)getDataValueAt:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuffer:(id)arg0 ;
-(id)serialize;
-(id)stringForAnalyticsType:(unsigned int)arg0 ;
-(struct _AnalyticsData *)dataInfoAt:(NSUInteger)arg0 ;
-(struct _AnalyticsGroupInfo *)groupInfoAt:(NSUInteger)arg0 ;
-(struct _AnalyticsLayerInfo *)layerInfoAt:(NSUInteger)arg0 ;
-(struct _AnalyticsProcedureInfo *)procedureInfoAt:(NSUInteger)arg0 ;
-(struct _AnalyticsTaskInfo *)taskInfoAt:(NSUInteger)arg0 ;


@end


#endif