// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDICTIONARYINVITATIONCONTEXT_H
#define IDSDICTIONARYINVITATIONCONTEXT_H

@class NSString, NSDictionary;
@protocol IDSInvitationContext;

#import <Foundation/Foundation.h>


@interface IDSDictionaryInvitationContext : NSObject <IDSInvitationContext>



@property (readonly) NSInteger contextType; // ivar: _contextType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *schemaIdentifier; // ivar: _schemaIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 schema:(id)arg1 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payload;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif