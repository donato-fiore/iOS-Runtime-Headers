// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPBINTENTDEFINITION_H
#define VCPBINTENTDEFINITION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface VCPBIntentDefinition : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *associatedBundleID; // ivar: _associatedBundleID
@property (retain, nonatomic) NSMutableArray *files; // ivar: _files


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)filesAtIndex:(NSUInteger)arg0 ;
-(void)addFiles:(id)arg0 ;
-(void)clearFiles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif