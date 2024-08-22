// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETSOURCE_H
#define DBSMARTWIDGETSOURCE_H

@class NSDictionary, NSDate, NSArray, NSString;
@protocol DBSmartWidgetSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBSmartWidgetSource : NSObject

@property (retain, nonatomic) NSDictionary *currentPredictions; // ivar: _currentPredictions
@property (readonly, weak, nonatomic) NSObject<DBSmartWidgetSourceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSDate *lastRefresh; // ivar: _lastRefresh
@property (readonly, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)predictionClasses;
+(id)registeredSources;
+(void)load;
+(void)registerSource:(Class)arg0 ;
-(BOOL)defaultsDisabled;
-(BOOL)shouldKeepPrediction:(id)arg0 ;
-(id)description;
-(id)freshPredictions;
-(id)initWithDelegate:(id)arg0 resourceProvider:(id)arg1 ;
-(void)handleEvent:(id)arg0 ;
-(void)refreshDisabled;
-(void)refreshPredictions;


@end


#endif