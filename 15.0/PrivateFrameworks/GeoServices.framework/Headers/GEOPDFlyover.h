// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDFLYOVER_H
#define GEOPDFLYOVER_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOPDFlyover : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    *GEOPDCameraPathFrame _cameraPaths;
    NSUInteger _cameraPathsCount;
    NSUInteger _cameraPathsSpace;
    *GEOPDLabelFrame _labelFrames;
    NSUInteger _labelFramesCount;
    NSUInteger _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _useSplines;
    ? _flags;
}


@property (readonly, nonatomic) *GEOPDCameraPathFrame cameraPaths;
@property (readonly, nonatomic) NSUInteger cameraPathsCount;
@property (nonatomic) BOOL hasUseSplines;
@property (readonly, nonatomic) *GEOPDLabelFrame labelFrames;
@property (readonly, nonatomic) NSUInteger labelFramesCount;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *notificationMessages;
@property (nonatomic) BOOL useSplines;


+(BOOL)isValid:(id)arg0 ;
+(Class)labelType;
+(Class)notificationMessageType;
+(id)flyoverForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bestLocalizedAnnouncementMessage;
-(id)bestLocalizedLabelAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)labelAtIndex:(NSUInteger)arg0 ;
-(id)notificationMessageAtIndex:(NSUInteger)arg0 ;
-(struct GEOPDCameraPathFrame )cameraPathAtIndex:(NSUInteger)arg0 ;
-(struct GEOPDLabelFrame )labelFrameAtIndex:(NSUInteger)arg0 ;
-(void)addCameraPath:(struct GEOPDCameraPathFrame )arg0 ;
-(void)addLabel:(id)arg0 ;
-(void)addLabelFrame:(struct GEOPDLabelFrame )arg0 ;
-(void)addNotificationMessage:(id)arg0 ;
-(void)clearCameraPaths;
-(void)clearLabelFrames;
-(void)clearLabels;
-(void)clearNotificationMessages;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif