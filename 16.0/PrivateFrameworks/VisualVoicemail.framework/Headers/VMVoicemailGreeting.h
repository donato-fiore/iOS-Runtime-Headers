// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMVOICEMAILGREETING_H
#define VMVOICEMAILGREETING_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMVoicemailGreeting : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif