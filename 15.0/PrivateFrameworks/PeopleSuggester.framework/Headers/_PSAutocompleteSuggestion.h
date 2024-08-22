// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSAUTOCOMPLETESUGGESTION_H
#define _PSAUTOCOMPLETESUGGESTION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *chatGuid; // ivar: _chatGuid
@property (readonly, copy, nonatomic) NSArray *chatHandles; // ivar: _chatHandles
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) NSUInteger resultSourceType; // ivar: _resultSourceType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithChatGuid:(id)arg0 chatHandles:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(NSUInteger)arg5 autocompleteResult:(id)arg6 ;
-(id)initWithChatGuid:(id)arg0 chatHandles:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(NSUInteger)arg5 autocompleteResult:(id)arg6 recipients:(id)arg7 ;
-(id)initWithChatGuid:(id)arg0 displayName:(id)arg1 handle:(id)arg2 contactIdentifier:(id)arg3 resultSourceType:(NSUInteger)arg4 autocompleteResult:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif