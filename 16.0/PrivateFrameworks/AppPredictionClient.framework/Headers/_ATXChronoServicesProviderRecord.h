// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXCHRONOSERVICESPROVIDERRECORD_H
#define _ATXCHRONOSERVICESPROVIDERRECORD_H

@class NSString, CHSWidget;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _ATXChronoServicesProviderRecord : NSObject

@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSString *suggestedStackId; // ivar: _suggestedStackId
@property (retain, nonatomic) CHSWidget *widget; // ivar: _widget
@property (retain, nonatomic) NSObject<BSInvalidatable> *widgetHandle; // ivar: _widgetHandle




@end


#endif