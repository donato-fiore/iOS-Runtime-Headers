// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSPLITROOMTRANSFORMEDITEM_H
#define HUSPLITROOMTRANSFORMEDITEM_H

@class HFAccessoryRepresentableTransformItem, NSString, HMRoom;
@protocol NSCopying, NAIdentifiable;



@interface HUSplitRoomTransformedItem : HFAccessoryRepresentableTransformItem <NSCopying, NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceItem:(id)arg0 room:(id)arg1 ;
-(id)updateWithOptions:(id)arg0 ;


@end


#endif