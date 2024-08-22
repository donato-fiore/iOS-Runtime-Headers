// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTUCONVERSATIONITEM_H
#define IMTUCONVERSATIONITEM_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"

@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (nonatomic) NSUInteger avMode; // ivar: _avMode
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;


-(BOOL)isFromMe;
-(id)conversationUUID;
-(id)copyDictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 guid:(id)arg2 messageSummaryInfo:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif