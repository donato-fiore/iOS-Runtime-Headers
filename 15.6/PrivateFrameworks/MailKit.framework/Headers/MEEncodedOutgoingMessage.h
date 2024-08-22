// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEENCODEDOUTGOINGMESSAGE_H
#define MEENCODEDOUTGOINGMESSAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEEncodedOutgoingMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) BOOL isSigned; // ivar: _isSigned
@property (readonly, copy, nonatomic) NSData *rawData; // ivar: _rawData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawData:(id)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif