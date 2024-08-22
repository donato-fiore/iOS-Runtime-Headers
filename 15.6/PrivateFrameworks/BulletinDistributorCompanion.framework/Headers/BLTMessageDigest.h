// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTMESSAGEDIGEST_H
#define BLTMESSAGEDIGEST_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLTMessageDigest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *messageDigest; // ivar: _messageDigest


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessageDigest:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif