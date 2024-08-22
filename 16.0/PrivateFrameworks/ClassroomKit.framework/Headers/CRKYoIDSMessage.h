// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKYOIDSMESSAGE_H
#define CRKYOIDSMESSAGE_H

@class NSDictionary, NSString;
@protocol CRKIDSMessage;

#import <Foundation/Foundation.h>


@interface CRKYoIDSMessage : NSObject <CRKIDSMessage>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger messageType;


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif