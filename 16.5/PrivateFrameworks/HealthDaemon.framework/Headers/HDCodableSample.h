// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLESAMPLE_H
#define HDCODABLESAMPLE_H

@class PBCodable, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableHealthObject.h"

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasObject;
@property (nonatomic) BOOL hasStartDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableHealthObject *object; // ivar: _object
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif