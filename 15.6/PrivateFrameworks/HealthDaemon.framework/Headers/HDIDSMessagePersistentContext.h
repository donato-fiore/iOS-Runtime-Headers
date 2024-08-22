// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDIDSMESSAGEPERSISTENTCONTEXT_H
#define HDIDSMESSAGEPERSISTENTCONTEXT_H

@class NSString, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding>

 {
    BOOL _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_userInfo;
    NSDate *_date;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif