// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFRAUDSCORE_H
#define AMSFRAUDSCORE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSFraudScore : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (copy, nonatomic) NSString *score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScore:(id)arg0 action:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif