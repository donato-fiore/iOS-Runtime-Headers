// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDHIGHLIGHTPILLSLOTTAG_H
#define SLDHIGHLIGHTPILLSLOTTAG_H

@class NSNumber, NSArray;
@protocol NSCopying, NSCoding;


#import "SLDPillSlotTag.h"
#import "SLPerson.h"

@interface SLDHighlightPillSlotTag : SLDPillSlotTag <NSCopying, NSCoding>



@property (readonly, nonatomic) NSUInteger allSendersCount;
@property (nonatomic) NSNumber *allSendersNumber; // ivar: _allSendersNumber
@property (readonly, nonatomic) NSUInteger maxPossibleImageCount;
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) SLPerson *meSender; // ivar: _meSender
@property (retain, nonatomic) SLPerson *pinnedSender; // ivar: _pinnedSender
@property (retain, nonatomic) NSArray *sendersToDisplay; // ivar: _sendersToDisplay
@property (nonatomic) NSUInteger variant; // ivar: _variant
@property (retain, nonatomic) NSNumber *widthNumber; // ivar: _widthNumber


+(id)tagForHighlightAttributions:(id)arg0 maxWidth:(CGFloat)arg1 maxSendersToDisplay:(NSUInteger)arg2 variant:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlightAttributions:(id)arg0 maxWidth:(CGFloat)arg1 maxSendersToDisplay:(NSUInteger)arg2 variant:(NSUInteger)arg3 ;
-(void)_generateSendersWithDisplayPolicyForAttributions:(id)arg0 maxSendersToDisplay:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif