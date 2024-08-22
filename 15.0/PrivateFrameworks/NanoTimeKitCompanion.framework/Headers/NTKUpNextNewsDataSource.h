// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTNEWSDATASOURCE_H
#define NTKUPNEXTNEWSDATASOURCE_H

@class REElementDataSource;


#import "NTKUpNextElementDataSource.h"

@interface NTKUpNextNewsDataSource : REElementDataSource

@property (retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy; // ivar: _newsDataSourceProxy


+(BOOL)wantsReloadForSignificantTimeChange;
+(Class)nanoNewsDataSourceClass;
+(NSUInteger)elementContentMode;
+(id)bundleIdentifier;
-(id)init;
-(id)supportedSections;
-(void)getElementsDuringDateInterval:(id)arg0 inSection:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)getElementsInSection:(id)arg0 withHandler:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)setAllowsLocationUse:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setRunning:(BOOL)arg0 ;
-(void)setState:(NSUInteger)arg0 ;


@end


#endif