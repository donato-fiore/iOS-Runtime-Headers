// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBTRACK_H
#define _SFPBTRACK_H

@class PBCodable, NSString, NSData;
@protocol _SFPBTrack, NSSecureCoding;


#import "_SFPBActionItem.h"
#import "_SFPBURL.h"

@interface _SFPBTrack : PBCodable <_SFPBTrack, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *number; // ivar: _number
@property (retain, nonatomic) _SFPBActionItem *playAction; // ivar: _playAction
@property (retain, nonatomic) _SFPBURL *preview; // ivar: _preview
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif