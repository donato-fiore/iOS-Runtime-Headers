// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDHIGHLIGHTDISAMBIGUATIONPILLSLOTTAG_H
#define SLDHIGHLIGHTDISAMBIGUATIONPILLSLOTTAG_H

@class NSString, NSNumber;


#import "SLDPillSlotTag.h"
#import "SLPerson.h"

@interface SLDHighlightDisambiguationPillSlotTag : SLDPillSlotTag

@property (nonatomic, getter=isFromMe) BOOL fromMe; // ivar: _fromMe
@property (retain, nonatomic) NSString *groupDisplayName; // ivar: _groupDisplayName
@property (nonatomic) BOOL isGroupConversation; // ivar: _isGroupConversation
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) NSNumber *otherRecipientCount; // ivar: _otherRecipientCount
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (retain, nonatomic) SLPerson *sender; // ivar: _sender
@property (nonatomic) NSUInteger variant; // ivar: _variant
@property (retain, nonatomic) NSNumber *widthNumber; // ivar: _widthNumber


+(id)tagForHighlightAttribution:(id)arg0 maxWidth:(CGFloat)arg1 variant:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlightAttribution:(id)arg0 maxWidth:(CGFloat)arg1 variant:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif