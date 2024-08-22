// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTABLEMAIL_H
#define SXPRESENTABLEMAIL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SXPresentableMail : NSObject

@property (readonly, nonatomic) NSString *recipient; // ivar: _recipient
@property (readonly, nonatomic) NSString *subject; // ivar: _subject


-(id)initWithRecipient:(id)arg0 subject:(id)arg1 ;


@end


#endif