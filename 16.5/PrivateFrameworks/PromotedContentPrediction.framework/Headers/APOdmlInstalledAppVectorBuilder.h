// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLINSTALLEDAPPVECTORBUILDER_H
#define APODMLINSTALLEDAPPVECTORBUILDER_H

@class NSMutableDictionary;


#import "APOdmlVectorBuilder.h"

@interface APOdmlInstalledAppVectorBuilder : APOdmlVectorBuilder

@property (retain) NSMutableDictionary *bundleIDtoAppInfo; // ivar: _bundleIDtoAppInfo


-(CGFloat)weightForEvents:(id)arg0 ;
-(id)_installedStoreAppEnumerator;
-(id)eventName;
-(id)eventsBetween:(id)arg0 and:(id)arg1 withLimit:(NSUInteger)arg2 ;
-(id)initWithVersion:(id)arg0 lookbackPeriod:(id)arg1 maxQueryElements:(id)arg2 task:(id)arg3 exponentialDecayConstant:(id)arg4 weightByDuration:(id)arg5 isCounterfactual:(BOOL)arg6 ;
-(id)retrieveFilteredEvents:(id)arg0 ;
-(void)buildBundleIDtoAdamIDCache:(id)arg0 ;


@end


#endif