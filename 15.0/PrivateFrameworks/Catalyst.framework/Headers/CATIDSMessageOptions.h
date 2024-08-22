// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATIDSMESSAGEOPTIONS_H
#define CATIDSMESSAGEOPTIONS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CATIDSMessageOptions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *deliveryTimeout; // ivar: _deliveryTimeout
@property (nonatomic, getter=shouldFireAndForget) BOOL fireAndForget; // ivar: _fireAndForget


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif