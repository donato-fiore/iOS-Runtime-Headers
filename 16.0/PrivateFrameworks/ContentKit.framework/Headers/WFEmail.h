// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEMAIL_H
#define WFEMAIL_H

@class NSString, NSData, EMDaemonInterface, NSArray;
@protocol NSCopying, NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>

#import "WFEmailAddress.h"

@interface WFEmail : NSObject <NSCopying, NSSecureCoding, WFNaming>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSData *identifier; // ivar: _identifier
@property (readonly, nonatomic) EMDaemonInterface *interface; // ivar: _interface
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) WFEmailAddress *sender; // ivar: _sender
@property (readonly, copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly, nonatomic) NSUInteger subjectPrefix; // ivar: _subjectPrefix
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 accountIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchAttachmentsWithCompletionHandler:(id)arg0 ;
-(void)fetchContentRepresentationWithCompletionHandler:(id)arg0 ;


@end


#endif