// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFDATAAGGREGATIONTASK_H
#define TFDATAAGGREGATIONTASK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TFDataAggregationTask : NSObject

@property (copy, nonatomic) id *extractValuesBlock; // ivar: _extractValuesBlock
@property (copy, nonatomic) id *loadDataBlock; // ivar: _loadDataBlock
@property (readonly, copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *providedEntryIdentifiers; // ivar: _providedEntryIdentifiers


+(CGFloat)batteryLevel;
+(id)anytimeTasksForSession:(id)arg0 ;
+(id)cellularServiceInfo;
+(id)deviceInfoTask;
+(id)deviceType;
+(id)networkInfoTask;
+(id)networkType;
+(id)regionInfoTask;
+(id)sessionInfoTaskForIdentifier:(id)arg0 ;
+(id)snapshotTasksForSession:(id)arg0 ;
+(id)watchInfoTask;
+(struct CGSize )screenDimensions;
-(id)description;
-(id)initWithName:(id)arg0 providedEntryIdentifiers:(id)arg1 ;
-(void)extractDataPropertiesFromData:(id)arg0 intoDataContainer:(id)arg1 ;
-(void)loadDataOnQueue:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif