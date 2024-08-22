// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINLINETIPACTION_H
#define ICQINLINETIPACTION_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQInlineTipAction : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (retain, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif