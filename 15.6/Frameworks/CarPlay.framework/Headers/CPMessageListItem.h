// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMESSAGELISTITEM_H
#define CPMESSAGELISTITEM_H

@class NSString, NSUUID;
@protocol CPListItemPrivate, NSSecureCoding, CPListTemplateItem;

#import <Foundation/Foundation.h>

#import "CPMessageListItemLeadingConfiguration.h"
#import "CPListTemplate.h"
#import "CPMessageListItemTrailingConfiguration.h"

@interface CPMessageListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPListTemplateItem>



@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) CPMessageListItemLeadingConfiguration *leadingConfiguration; // ivar: _leadingConfiguration
@property (weak, nonatomic) CPListTemplate *listTemplate; // ivar: _listTemplate
@property (copy, nonatomic) NSString *phoneOrEmailAddress; // ivar: _phoneOrEmailAddress
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) CPMessageListItemTrailingConfiguration *trailingConfiguration; // ivar: _trailingConfiguration
@property (copy, nonatomic) NSString *trailingText; // ivar: _trailingText
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationIdentifier:(id)arg0 text:(id)arg1 leadingConfiguration:(id)arg2 trailingConfiguration:(id)arg3 detailText:(id)arg4 trailingText:(id)arg5 ;
-(id)initWithFullName:(id)arg0 phoneOrEmailAddress:(id)arg1 leadingConfiguration:(id)arg2 trailingConfiguration:(id)arg3 detailText:(id)arg4 trailingText:(id)arg5 ;
-(void)_setNeedsUpdate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif