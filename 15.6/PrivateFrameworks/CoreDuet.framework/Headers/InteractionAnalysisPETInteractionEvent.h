// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTERACTIONANALYSISPETINTERACTIONEVENT_H
#define INTERACTIONANALYSISPETINTERACTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying>

 {
    CGFloat _timestamp;
    NSString *_associatedMemberIDs;
    NSString *_bundleID;
    NSString *_direction;
    NSString *_eventMechanism;
    NSString *_interactionID;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif