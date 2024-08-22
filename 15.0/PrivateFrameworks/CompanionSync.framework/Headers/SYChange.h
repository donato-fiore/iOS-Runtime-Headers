// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYCHANGE_H
#define SYCHANGE_H

@class PBCodable, NSData, NSString;
@protocol SYChange, NSCopying;



@interface SYChange : PBCodable <SYChange, NSCopying>



@property (retain, nonatomic) NSData *changeData; // ivar: _changeData
@property (readonly, nonatomic) NSInteger changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChangeData;
@property (readonly, nonatomic) BOOL hasSequencer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *objectId; // ivar: _objectId
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (retain, nonatomic) NSString *sequencer; // ivar: _sequencer
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) NSUInteger version; // ivar: _version


+(id)changeWithChangeObject:(id)arg0 serializer:(id)arg1 ;
+(id)changeWithChangeObject:(id)arg0 serializer:(id)arg1 encodeUsingVersion:(NSInteger)arg2 ;
+(id)changeWithObject:(id)arg0 updateType:(int)arg1 store:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)changeObjectWithSerializer:(id)arg0 ;
-(id)changeObjectWithSerializer:(id)arg0 encodedByVersion:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)objectForStore:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif