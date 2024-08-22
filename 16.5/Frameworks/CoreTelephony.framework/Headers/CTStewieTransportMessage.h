// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIETRANSPORTMESSAGE_H
#define CTSTEWIETRANSPORTMESSAGE_H

@class NSData, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieTransportMessage : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *msgId; // ivar: _msgId


+(BOOL)supportsSecureCoding;
+(id)allowedSetOfClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransportMessage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMsgId:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif