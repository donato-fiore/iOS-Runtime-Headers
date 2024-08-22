// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEDESCRIPTOR_H
#define IMMESSAGEDESCRIPTOR_H

@class NSAttributedString, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMMessageDescriptor : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *messageBody; // ivar: _messageBody
@property (readonly, copy, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly, nonatomic) NSArray *messageParts; // ivar: _messageParts


-(id)initWithMessageBody:(id)arg0 messageGUID:(id)arg1 ;


@end


#endif