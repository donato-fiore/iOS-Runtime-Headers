// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSUGGESTIONPROXY_H
#define _PSSUGGESTIONPROXY_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSSuggestionProxy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSArray *handles; // ivar: _handles
@property (readonly, copy, nonatomic) NSString *interactionRecipients; // ivar: _interactionRecipients
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSString *reasonType; // ivar: _reasonType
@property (readonly, copy, nonatomic) NSString *suggestionKey;
@property (readonly, nonatomic) BOOL useGroupsWhenFindingRecipient; // ivar: _useGroupsWhenFindingRecipient


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 contactID:(id)arg2 handle:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 contactID:(id)arg2 handle:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 useGroupsWhenFindingRecipient:(BOOL)arg6 ;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 contactID:(id)arg2 handles:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 useGroupsWhenFindingRecipient:(BOOL)arg6 ;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 contactID:(id)arg2 reason:(id)arg3 reasonType:(id)arg4 ;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 handles:(id)arg2 reason:(id)arg3 reasonType:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif