// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPMESSAGE_H
#define IPMESSAGE_H

@class NSMutableArray, NSMutableDictionary, NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "IPPerson.h"

@interface IPMessage : NSObject {
    NSMutableArray *_messageUnits;
    NSMutableDictionary *_keywordsDictionary;
    NSString *_lowercaseSubject;
}


@property (retain) NSDate *dateSent; // ivar: _dateSent
@property (retain) NSString *htmlContent; // ivar: _htmlContent
@property (retain) NSString *identifier; // ivar: _identifier
@property BOOL isGroupConversation; // ivar: _isGroupConversation
@property BOOL isReply; // ivar: _isReply
@property BOOL isSenderSignificant; // ivar: _isSenderSignificant
@property BOOL isSent; // ivar: _isSent
@property (readonly) NSString *lowercaseSubject;
@property (retain, nonatomic) NSArray *messageUnits;
@property (readonly) NSUInteger messageUnitsTextLength; // ivar: _messageUnitsTextLength
@property (retain) NSArray *recipients; // ivar: _recipients
@property (retain) IPPerson *sender; // ivar: _sender
@property (retain) NSString *subject; // ivar: _subject
@property (retain) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain) NSString *type; // ivar: _type


-(id)detectedKeywordsDictionary;
-(id)firstHeaderValueForKey:(id)arg0 inHeaders:(id)arg1 ;
-(id)init;
-(id)initWithDateSent:(id)arg0 ;
-(id)initWithDateSent:(id)arg0 subject:(id)arg1 ;
-(id)initWithHTMLContent:(id)arg0 emailHeadersDictionary:(id)arg1 dateSent:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 subject:(id)arg1 sender:(id)arg2 recipients:(id)arg3 dateSent:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 subject:(id)arg1 sender:(id)arg2 recipients:(id)arg3 dateSent:(id)arg4 type:(id)arg5 ;
-(id)initWithSGIPMessage:(id)arg0 ;
-(void)addDetectedKeyword:(id)arg0 classificationTypeIdentifier:(id)arg1 ;
-(void)addMessageUnit:(id)arg0 ;


@end


#endif