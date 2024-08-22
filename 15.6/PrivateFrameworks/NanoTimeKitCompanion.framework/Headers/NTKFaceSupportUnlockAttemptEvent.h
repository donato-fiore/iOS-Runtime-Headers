// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESUPPORTUNLOCKATTEMPTEVENT_H
#define NTKFACESUPPORTUNLOCKATTEMPTEVENT_H

@class NSString, NSDictionary;
@protocol NTKFaceSupportAnalyticsRepresentable;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportUnlockAttemptEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat length; // ivar: _length
@property (readonly, nonatomic) NSUInteger method; // ivar: _method
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger unlockErrorCode; // ivar: _unlockErrorCode


-(id)initWithLength:(CGFloat)arg0 status:(NSUInteger)arg1 method:(NSUInteger)arg2 bundleIdentifier:(id)arg3 unlockErrorCode:(NSInteger)arg4 ;


@end


#endif