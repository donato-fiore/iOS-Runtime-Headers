// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTABLEMESSAGE_H
#define SXPRESENTABLEMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SXPresentableMessage : NSObject

@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *recipient; // ivar: _recipient


-(id)initWithRecipient:(id)arg0 message:(id)arg1 ;


@end


#endif