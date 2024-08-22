// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPINGHANDLERHOLDER_H
#define BLTPINGHANDLERHOLDER_H

@class NSString;
@protocol BLTPingSubscriptionInfo;

#import <Foundation/Foundation.h>


@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo>

 {
    id *_pingHandler;
}


@property (nonatomic) NSUInteger ackType; // ivar: _ackType
@property (readonly, nonatomic) BOOL canAck;
@property (readonly, nonatomic) BOOL canAckOnLocalConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forBulletin; // ivar: _forBulletin
@property (nonatomic) BOOL forNotification; // ivar: _forNotification
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPingHandler:(id)arg0 ;
// -(void)_performPingWithAckableForwardBlock:(id)arg0 ackableNoParametersBlock:(unk)arg1 noAckBlock:(id)arg2 clientAck:(unk)arg3  ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithBulletin:(id)arg0 notification:(id)arg1 ack:(id)arg2 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ack:(id)arg2 ;


@end


#endif