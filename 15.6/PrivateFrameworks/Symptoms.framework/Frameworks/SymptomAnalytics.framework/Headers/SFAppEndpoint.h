// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPENDPOINT_H
#define SFAPPENDPOINT_H

@class NSManagedObject, NSData, NSDate;


#import "SFApp.h"

@interface SFAppEndpoint : NSManagedObject

@property (nonatomic) int effectiveUserId;
@property (copy, nonatomic) NSData *endpointSet;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif