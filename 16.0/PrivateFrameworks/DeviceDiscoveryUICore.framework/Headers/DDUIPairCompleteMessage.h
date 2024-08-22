// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIPAIRCOMPLETEMESSAGE_H
#define DDUIPAIRCOMPLETEMESSAGE_H

@class NSDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface DDUIPairCompleteMessage : NSObject

@property (readonly, nonatomic) NSDictionary *cancellationReason; // ivar: _cancellationReason
@property (nonatomic) BOOL isCancellation; // ivar: _isCancellation
@property (readonly, nonatomic) NSUUID *listenerUUID; // ivar: _listenerUUID
@property (readonly, nonatomic) NSUInteger notificationResult; // ivar: _notificationResult


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCancellationReason:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithNotificationResult:(NSUInteger)arg0 ;
-(id)initWithNotificationResult:(NSUInteger)arg0 listenerUUID:(id)arg1 ;


@end


#endif