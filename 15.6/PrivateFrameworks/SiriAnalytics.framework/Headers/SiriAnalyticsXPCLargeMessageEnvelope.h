// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSXPCLARGEMESSAGEENVELOPE_H
#define SIRIANALYTICSXPCLARGEMESSAGEENVELOPE_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *largeMessagePath; // ivar: _largeMessagePath
@property (readonly, copy, nonatomic) NSData *serializedDataUploadMessage; // ivar: _serializedDataUploadMessage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLargeMessagePath:(id)arg0 serializedDataUploadMessage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif