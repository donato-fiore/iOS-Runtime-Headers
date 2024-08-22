// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIDSMESSAGEOPTIONS_H
#define CRKIDSMESSAGEOPTIONS_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CRKIDSMessageOptions : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *deliveryTimeout; // ivar: _deliveryTimeout
@property (nonatomic, getter=shouldFireAndForget) BOOL fireAndForget; // ivar: _fireAndForget


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif