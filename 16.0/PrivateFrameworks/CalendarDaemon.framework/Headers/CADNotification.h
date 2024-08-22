// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADNOTIFICATION_H
#define CADNOTIFICATION_H

@class NSArray, NSMutableArray, CADObjectID;

#import <Foundation/Foundation.h>


@interface CADNotification : NSObject

@property (readonly, nonatomic) BOOL expanded;
@property (readonly, nonatomic) NSArray *expandedNotifications;
@property (readonly, nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSMutableArray *mutableExpandedNotifications; // ivar: _mutableExpandedNotifications
@property (readonly, nonatomic) CADObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) CGFloat occurrenceDate; // ivar: _occurrenceDate
@property (readonly, nonatomic) int type; // ivar: _type


-(id)initWithType:(int)arg0 objectID:(id)arg1 occurrenceDate:(CGFloat)arg2 expirationDate:(CGFloat)arg3 ;
-(void)addExpandedNotification:(id)arg0 ;


@end


#endif