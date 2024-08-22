// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONMESSAGEACTIONURL_H
#define PKAPPLICATIONMESSAGEACTIONURL_H

@class NSURL;
@protocol NSSecureCoding;


#import "PKApplicationMessageAction.h"

@interface PKApplicationMessageActionURL : PKApplicationMessageAction <NSSecureCoding>



@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)createWithSensitiveURL:(id)arg0 ;
+(id)createWithURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif