// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECURECHANNELACTION_H
#define SECURECHANNELACTION_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SecureChannelAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 message:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif