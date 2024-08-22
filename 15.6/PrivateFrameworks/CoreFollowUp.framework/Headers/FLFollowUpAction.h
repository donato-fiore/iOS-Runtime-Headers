// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLFOLLOWUPACTION_H
#define FLFOLLOWUPACTION_H

@class NSData, NSString, NSURL, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FLFollowUpAction : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *_userInfoData;
@property (nonatomic) NSUInteger eventSource; // ivar: _eventSource
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy) NSString *label; // ivar: _label
@property (copy, nonatomic) NSData *launchActionArguments; // ivar: _launchActionArguments
@property (copy) NSURL *launchActionURL; // ivar: _launchActionURL
@property (nonatomic) NSUInteger sqlID; // ivar: _sqlID
@property (copy) NSURL *url; // ivar: _url
@property (copy) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)actionWithLabel:(id)arg0 url:(id)arg1 ;
-(BOOL)_loadActionURL;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 url:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif