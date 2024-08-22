// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFTNEPSERVICE_H
#define NFTNEPSERVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFTNEPService : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned short maxMessageSize; // ivar: _maxMessageSize
@property (nonatomic) unsigned char maxWaitTimeExtension; // ivar: _maxWaitTimeExtension
@property (nonatomic) unsigned char minWaitTime; // ivar: _minWaitTime
@property (retain, nonatomic) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
+(id)serviceWithURI:(id)arg0 minWaitTime:(unsigned char)arg1 maxWaitTimeExtension:(unsigned char)arg2 maxMessageSize:(unsigned short)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif