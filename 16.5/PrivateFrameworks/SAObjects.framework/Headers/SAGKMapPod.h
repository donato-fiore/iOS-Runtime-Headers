// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKMAPPOD_H
#define SAGKMAPPOD_H

@class NSNumber;


#import "SAGKPodView.h"
#import "SALocation.h"
#import "SAUIAppPunchOut.h"

@interface SAGKMapPod : SAGKPodView

@property (retain, nonatomic) SALocation *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *showButton;
@property (copy, nonatomic) NSNumber *zoomLevel;


+(id)mapPod;
+(id)mapPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif