// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFIELDXATTRBLOB_H
#define BRFIELDXATTRBLOB_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BRFieldXattrBlob : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *xattrs; // ivar: _xattrs


+(BOOL)loadXattrsFromFD:(int)arg0 structuralBlob:(*id)arg1 contentBlob:(*id)arg2 localBlob:(*id)arg3 withMaximumSize:(NSUInteger)arg4 error:(*id)arg5 ;
+(BOOL)removeXattrsOnFD:(int)arg0 includingContentRelated:(BOOL)arg1 error:(*id)arg2 ;
+(id)loadXattrsFromFD:(int)arg0 withMaximumSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)applyToFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)shortDescription;
-(id)xattrsAtIndex:(NSUInteger)arg0 ;
-(void)addXattrs:(id)arg0 ;
-(void)clearXattrs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif