// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSCONTROLINTERFACEMESSAGE_H
#define TVRMSCONTROLINTERFACEMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSupportsDirectionalControl;
@property (nonatomic) BOOL hasSupportsSpeakerSelection;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (nonatomic) BOOL supportsDirectionalControl; // ivar: _supportsDirectionalControl
@property (nonatomic) BOOL supportsSpeakerSelection; // ivar: _supportsSpeakerSelection
@property (nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl


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