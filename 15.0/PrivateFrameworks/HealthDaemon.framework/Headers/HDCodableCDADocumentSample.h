// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLECDADOCUMENTSAMPLE_H
#define HDCODABLECDADOCUMENTSAMPLE_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *authorName; // ivar: _authorName
@property (retain, nonatomic) NSString *custodianName; // ivar: _custodianName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *documentData; // ivar: _documentData
@property (readonly, nonatomic) BOOL hasAuthorName;
@property (readonly, nonatomic) BOOL hasCustodianName;
@property (readonly, nonatomic) BOOL hasDocumentData;
@property (nonatomic) BOOL hasOmittedContent;
@property (readonly, nonatomic) BOOL hasPatientName;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (nonatomic) int omittedContent; // ivar: _omittedContent
@property (retain, nonatomic) NSString *patientName; // ivar: _patientName
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)omittedContentAsString:(int)arg0 ;
-(int)StringAsOmittedContent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif