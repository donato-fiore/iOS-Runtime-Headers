// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHANDLEPUSHNOTIFICATIONRESULT_H
#define FCHANDLEPUSHNOTIFICATIONRESULT_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCHandlePushNotificationResult : NSObject <NSCopying>

 {
    BOOL _handled;
    NSSet *_recordZoneIDs;
}


@property (readonly, nonatomic, getter=wasHandled) BOOL handled;
@property (readonly, nonatomic) NSSet *recordZoneIDs;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif