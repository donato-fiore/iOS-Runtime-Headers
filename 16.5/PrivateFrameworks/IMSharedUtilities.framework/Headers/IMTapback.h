// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTAPBACK_H
#define IMTAPBACK_H

@class NSString;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;

#import <Foundation/Foundation.h>

#import "IMTapback.h"

@interface IMTapback : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>



@property (readonly, nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (readonly, nonatomic) IMTapback *counterpart;
@property (readonly, nonatomic, getter=isRemoved) BOOL removed;
@property (readonly, nonatomic) IMTapback *removedTapbackCounterpart;
@property (readonly, nonatomic) NSString *representation; // ivar: _representation
@property (readonly, nonatomic, getter=isSendable) BOOL sendable;
@property (readonly, nonatomic) NSString *serializedTapbackString; // ivar: _serializedTapbackString
@property (readonly, nonatomic) IMTapback *visibleTapbackCounterpart;


+(BOOL)isValidAssociatedMessageType:(NSInteger)arg0 ;
+(BOOL)isValidRepresentation:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)tapbackWithAssociatedMessageType:(NSInteger)arg0 messageSummaryInfo:(id)arg1 ;
+(id)tapbackWithAssociatedMessageType:(NSInteger)arg0 messageSummaryInfo:(id)arg1 usePlaceholderEmojiIfNeeded:(BOOL)arg2 ;
+(id)tapbackWithAssociatedMessageType:(NSInteger)arg0 representation:(id)arg1 ;
+(id)tapbackWithAssociatedMessageType:(NSInteger)arg0 representation:(id)arg1 usePlaceholderEmojiIfNeeded:(BOOL)arg2 ;
+(id)tapbackWithSerializedString:(id)arg0 ;
+(id)tapbacksForAssociatedMessageTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldQuoteContentString:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionString;
-(id)backwardCompatibilityStringFormatForMessageSummaryInfo:(id)arg0 ;
-(id)backwardCompatibilityStringWithMessageSummaryInfo:(id)arg0 ;
-(id)contentTypeStringForMessageSummaryInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssociatedMessageType:(NSInteger)arg0 ;
-(id)initWithAssociatedMessageType:(NSInteger)arg0 representation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg0 ;
-(id)longContentTypeStringForPluginBundleID:(id)arg0 pluginDisplayName:(id)arg1 ;
-(id)previewStringFormatForMessageSummaryInfo:(id)arg0 isFromMe:(BOOL)arg1 ;
-(id)previewStringWithMessageSummaryInfo:(id)arg0 senderDisplayName:(id)arg1 isFromMe:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg0 ;


@end


#endif