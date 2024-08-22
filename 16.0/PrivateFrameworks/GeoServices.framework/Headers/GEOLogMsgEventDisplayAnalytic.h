// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTDISPLAYANALYTIC_H
#define GEOLOGMSGEVENTDISPLAYANALYTIC_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying>

 {
    CGFloat _meanImageSpacing;
    int _displayActionTrigger;
    int _displayEvent;
    unsigned int _movementDistance;
    unsigned int _renderedImageCount;
    unsigned int _requestedImageCount;
    unsigned int _requiredResourcesAvailable;
    unsigned int _totalTime;
    ? _flags;
}


@property (nonatomic) int displayActionTrigger;
@property (nonatomic) int displayEvent;
@property (nonatomic) BOOL hasDisplayActionTrigger;
@property (nonatomic) BOOL hasDisplayEvent;
@property (nonatomic) BOOL hasMeanImageSpacing;
@property (nonatomic) BOOL hasMovementDistance;
@property (nonatomic) BOOL hasRenderedImageCount;
@property (nonatomic) BOOL hasRequestedImageCount;
@property (nonatomic) BOOL hasRequiredResourcesAvailable;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) CGFloat meanImageSpacing;
@property (nonatomic) unsigned int movementDistance;
@property (nonatomic) unsigned int renderedImageCount;
@property (nonatomic) unsigned int requestedImageCount;
@property (nonatomic) unsigned int requiredResourcesAvailable;
@property (nonatomic) unsigned int totalTime;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayActionTriggerAsString:(int)arg0 ;
-(id)displayEventAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDisplayActionTrigger:(id)arg0 ;
-(int)StringAsDisplayEvent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif