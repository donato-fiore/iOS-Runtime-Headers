// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOREDATAXPCMESSAGE_H
#define NSCOREDATAXPCMESSAGE_H

@class NSData, NSString;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSCoreDataXPCMessage : NSObject <NSCoding, NSSecureCoding>

 {
    NSUInteger _messageCode;
    NSData *_messageBody;
    NSString *_token;
    NSString *_contextName;
    NSString *_contextTransactionAuthor;
    NSString *_processName;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif