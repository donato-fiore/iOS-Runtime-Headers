// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYBACKLINKINDICATORCLIENT_H
#define SYBACKLINKINDICATORCLIENT_H

@class NSXPCConnection, NSArray;

#import <Foundation/Foundation.h>


@interface SYBacklinkIndicatorClient : NSObject

@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) NSInteger corner; // ivar: _corner
@property (nonatomic) unsigned int displayID; // ivar: _displayID
@property (copy, nonatomic) NSArray *domainIdentifiers; // ivar: _domainIdentifiers
@property (copy, nonatomic) NSArray *linkIdentifiers; // ivar: _linkIdentifiers
@property (nonatomic) BOOL sentRequest; // ivar: _sentRequest


+(id)_testingEndpoint;
+(id)clientWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 ;
+(id)clientWithLinkIdentifiers:(id)arg0 ;
+(void)hideIndicator;
+(void)hotCornerExited;
+(void)set_testingEndpoint:(id)arg0 ;
+(void)toggleIndicator;
+(void)toggleIndicatorWithDisplayID:(unsigned int)arg0 corner:(NSInteger)arg1 ;
-(BOOL)_shouldSendIndicatorRequest;
-(NSInteger)_showIndicatorAction;
-(id)init;
-(void)_clearLastShowIndicatorRequestTimestamp;
-(void)_configureConnectionAndResume;
-(void)_createConnectionIfNeeded;
-(void)_recordLastShowIndicatorRequestTimestamp;
-(void)_sendIndicatorRequestWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)requestIndicatorWithCompletion:(id)arg0 ;


@end


#endif