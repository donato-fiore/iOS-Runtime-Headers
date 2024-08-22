// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETHOMESOURCE_H
#define DBSMARTWIDGETHOMESOURCE_H

@class NSString;
@protocol DBHomeManagerObserver, DBHomeObserver;


#import "DBSmartWidgetSource.h"
#import "DBHomeManager.h"

@interface DBSmartWidgetHomeSource : DBSmartWidgetSource <DBHomeManagerObserver, DBHomeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DBHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(id)predictionClasses;
+(id)sourceName;
+(void)load;
-(id)freshPredictions;
-(id)initWithDelegate:(id)arg0 resourceProvider:(id)arg1 ;
-(void)dealloc;
-(void)home:(id)arg0 didUpdateLastUsedServiceOfType:(id)arg1 ;
-(void)homeDidChangeInRange:(id)arg0 ;
-(void)homeDidEnterExtendedRange:(id)arg0 ;
-(void)homeDidExitExtendedRange:(id)arg0 ;
-(void)homeManager:(id)arg0 didUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg0 willRemoveHomes:(id)arg1 ;


@end


#endif