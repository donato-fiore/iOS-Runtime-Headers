// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTUCONVERSATIONITEM_H
#define IMTUCONVERSATIONITEM_H

@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"

@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (nonatomic) NSUInteger flags; // ivar: _flags


-(BOOL)isFromMe;
-(id)conversationUUID;
-(id)copyDictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif