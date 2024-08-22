// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYIDSREQUEST_H
#define CNPROPERTYIDSREQUEST_H

@class NSString, NSArray;
@protocol IDSIDQueryControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate>



@property (readonly, nonatomic) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *idQueryResultHandler; // ivar: _idQueryResultHandler
@property (retain, nonatomic) NSString *listenerID; // ivar: _listenerID
@property (retain, nonatomic) NSArray *propertyItems; // ivar: _propertyItems
@property (copy) id *requestResultBlock; // ivar: _requestResultBlock
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


+(id)sharedWorkQueue;
-(id)initWithPropertyItems:(id)arg0 service:(id)arg1 postToMainQueue:(BOOL)arg2 resultBlock:(id)arg3 ;
-(void)_requestStatusOnMainQueue:(BOOL)arg0 ;
-(void)cancel;
-(void)cleanupDelegate;
-(void)idStatusUpdatedForDestinations:(id)arg0 service:(id)arg1 ;


@end


#endif