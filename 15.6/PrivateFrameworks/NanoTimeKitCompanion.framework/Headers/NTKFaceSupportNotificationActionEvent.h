// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESUPPORTNOTIFICATIONACTIONEVENT_H
#define NTKFACESUPPORTNOTIFICATIONACTIONEVENT_H

@class NSString, NSDictionary;
@protocol NTKFaceSupportAnalyticsRepresentable;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportNotificationActionEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delayFromPresentation; // ivar: _delayFromPresentation
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 action:(NSInteger)arg1 delayFromPresentation:(CGFloat)arg2 ;


@end


#endif