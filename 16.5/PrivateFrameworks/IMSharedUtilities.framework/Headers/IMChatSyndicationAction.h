// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHATSYNDICATIONACTION_H
#define IMCHATSYNDICATIONACTION_H



#import "IMSyndicationAction.h"

@interface IMChatSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic, getter=isAutoDonatingMessages) BOOL autoDonateMessages; // ivar: _autoDonateMessages


+(BOOL)supportsSecureCoding;
-(BOOL)autoSyndicateMessages;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 autoDonateMessages:(BOOL)arg2 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 autoDonateMessages:(BOOL)arg2 version:(unsigned char)arg3 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 deserializedSyndicationActionType:(unsigned char)arg2 version:(unsigned char)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(unsigned char)syndicatedItemType;


@end


#endif