// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBSHOWDIALOGEVENT_H
#define WFPBSHOWDIALOGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBShowDialogEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *automationType; // ivar: _automationType
@property (retain, nonatomic) NSString *dialogType; // ivar: _dialogType
@property (retain, nonatomic) NSString *dismissalType; // ivar: _dismissalType
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (readonly, nonatomic) BOOL hasDialogType;
@property (readonly, nonatomic) BOOL hasDismissalType;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasPresentationStyle;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *presentationStyle; // ivar: _presentationStyle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif