// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCOMPUTEXPCSUBSCRIPTION_H
#define BMCOMPUTEXPCSUBSCRIPTION_H

@class NSString, NSXPCConnection, BMDSL, NSSet, BMDSLSubscriber;
@protocol NSSecureCoding, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface BMComputeXPCSubscription : NSObject <NSSecureCoding>



@property (readonly, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) NSString *client; // ivar: _client
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) BMDSL *graph; // ivar: _graph
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *streamIdentifiers; // ivar: _streamIdentifiers
@property (readonly, nonatomic) BMDSLSubscriber *subscriber; // ivar: _subscriber
@property (readonly, nonatomic) NSUInteger token; // ivar: _token
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (readonly, nonatomic) BOOL waking; // ivar: _waking


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)storageForIdentifier:(id)arg0 ;
-(id)XPCEvent;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 client:(id)arg1 waking:(BOOL)arg2 DSLGraph:(id)arg3 block:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 client:(id)arg1 waking:(BOOL)arg2 DSLGraph:(id)arg3 subscriber:(id)arg4 block:(id)arg5 ;
-(id)initWithToken:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif