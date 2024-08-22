// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPAYMENTSOURCE_H
#define PKPAYLATERPAYMENTSOURCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
}


@property (nonatomic) NSInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)type;
-(id)description;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif