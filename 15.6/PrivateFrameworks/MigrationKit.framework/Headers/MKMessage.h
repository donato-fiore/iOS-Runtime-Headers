// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMESSAGE_H
#define MKMESSAGE_H

@class NSString, NSArray, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface MKMessage : NSObject

@property (copy, nonatomic) NSString *ID; // ivar: _ID
@property (copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *account; // ivar: _account
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSData *attributedBody; // ivar: _attributedBody
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) NSInteger chatStyle; // ivar: _chatStyle
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSArray *handles; // ivar: _handles
@property (nonatomic) BOOL isRead; // ivar: _isRead
@property (nonatomic) BOOL isSent; // ivar: _isSent
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSString *threadID; // ivar: _threadID


-(id)initWithData:(id)arg0 ;


@end


#endif