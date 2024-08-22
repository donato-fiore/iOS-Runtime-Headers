// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBRESPONSE_H
#define BBRESPONSE_H

@class NSString, NSURL, NSDictionary, BSServiceConnectionEndpoint, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBAssertion.h"

@interface BBResponse : NSObject <NSSecureCoding>

 {
    BBAssertion *_lifeAssertion;
    BOOL _sent;
}


@property (nonatomic) NSUInteger actionActivationMode; // ivar: _actionActivationMode
@property (nonatomic) NSInteger actionBehavior; // ivar: _actionBehavior
@property (copy, nonatomic) NSString *actionID; // ivar: _actionID
@property (copy, nonatomic) NSURL *actionLaunchURL; // ivar: _actionLaunchURL
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) BOOL activated; // ivar: _activated
@property (copy, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (copy, nonatomic) NSString *buttonID; // ivar: _buttonID
@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic) BOOL didOpenApplication; // ivar: _didOpenApplication
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSArray *lifeAssertions; // ivar: _lifeAssertions
@property (copy, nonatomic) NSString *originID; // ivar: _originID
@property (copy, nonatomic) NSString *replyText; // ivar: _replyText
@property (copy, nonatomic) id *sendBlock; // ivar: _sendBlock


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)send;


@end


#endif