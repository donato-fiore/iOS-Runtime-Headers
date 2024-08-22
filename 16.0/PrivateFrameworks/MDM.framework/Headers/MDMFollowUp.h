// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMFOLLOWUP_H
#define MDMFOLLOWUP_H

@class NSString, FLFollowUpController, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface MDMFollowUp : NSObject

@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) FLFollowUpController *followUpController; // ivar: _followUpController
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSString *notificationInfo; // ivar: _notificationInfo
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(void)clearFollowUpWithClientID:(id)arg0 ;
-(id)_constructFollowUp;
-(id)initWithStyle:(NSInteger)arg0 clientIdentifier:(id)arg1 itemIdentifier:(id)arg2 url:(id)arg3 title:(id)arg4 notificationInfo:(id)arg5 userInfo:(id)arg6 ;
-(void)clearFollowUp;
-(void)presentFollowUp;


@end


#endif