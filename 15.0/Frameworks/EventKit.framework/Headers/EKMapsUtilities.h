// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKMAPSUTILITIES_H
#define EKMAPSUTILITIES_H


#import <Foundation/Foundation.h>


@interface EKMapsUtilities : NSObject



+(id)_locationStringForStructuredLocation:(id)arg0 withTitle:(id)arg1 ;
+(id)mapsURLForLocation:(id)arg0 onEvent:(id)arg1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg2 ;
+(void)geocodeEventIfNeeded:(id)arg0 ;


@end


#endif