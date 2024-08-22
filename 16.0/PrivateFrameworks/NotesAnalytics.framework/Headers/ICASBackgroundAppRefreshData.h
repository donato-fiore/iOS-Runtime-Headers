// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASBACKGROUNDAPPREFRESHDATA_H
#define ICASBACKGROUNDAPPREFRESHDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASBackgroundAppRefreshData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *automaticAppUpdatesAllowed; // ivar: _automaticAppUpdatesAllowed


+(id)dataName;
-(id)initWithAutomaticAppUpdatesAllowed:(id)arg0 ;
-(id)toDict;


@end


#endif