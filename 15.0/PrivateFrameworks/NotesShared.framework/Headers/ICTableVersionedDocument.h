// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICTABLEVERSIONEDDOCUMENT_H
#define ICTABLEVERSIONEDDOCUMENT_H



#import "TTVersionedDocument.h"
#import "CRDocument.h"
#import "ICTable.h"

@interface ICTableVersionedDocument : TTVersionedDocument

@property (readonly) CRDocument *innerTableDocument; // ivar: _innerTableDocument
@property (retain, nonatomic) ICTable *table; // ivar: _table


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(NSUInteger)mergeWithTableVersionedDocument:(id)arg0 ;
-(id)initWithColumnCount:(NSUInteger)arg0 rowCount:(NSUInteger)arg1 replicaID:(id)arg2 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif