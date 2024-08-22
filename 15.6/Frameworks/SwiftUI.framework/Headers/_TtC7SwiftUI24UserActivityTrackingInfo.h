// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTUI24USERACTIVITYTRACKINGINFO_H
#define _TTC7SWIFTUI24USERACTIVITYTRACKINGINFO_H

@class NSString;
@protocol NSUserActivityDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI24UserActivityTrackingInfo : NSObject <NSUserActivityDelegate>

 {
    ? userActivity;
    ? handlers;
    ? sceneBridge;
    ? activityType;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)userActivityWillSave:(id)arg0 ;


@end


#endif