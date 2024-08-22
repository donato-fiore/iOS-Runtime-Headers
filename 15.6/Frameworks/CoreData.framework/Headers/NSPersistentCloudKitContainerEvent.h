// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTCLOUDKITCONTAINEREVENT_H
#define NSPERSISTENTCLOUDKITCONTAINEREVENT_H

@class NSDate, NSError, NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying>

 {
    NSManagedObjectID *_ckEventObjectID;
}


@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)eventTypeString:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCKEvent:(id)arg0 ;
-(void)dealloc;


@end


#endif