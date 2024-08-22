// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMMESSAGE_H
#define IAMMESSAGE_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IAMMessage : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *contentPages; // ivar: _contentPages
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *messageGroupIdentifier; // ivar: _messageGroupIdentifier
@property (readonly, nonatomic) BOOL requiresCloseButton; // ivar: _requiresCloseButton


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithICInAppMessageEntry:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 messageGroupIdentifier:(id)arg1 contentPages:(id)arg2 requiresCloseButton:(BOOL)arg3 ;


@end


#endif