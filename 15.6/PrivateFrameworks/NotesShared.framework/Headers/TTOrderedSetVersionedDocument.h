// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTORDEREDSETVERSIONEDDOCUMENT_H
#define TTORDEREDSETVERSIONEDDOCUMENT_H



#import "TTVersionedDocument.h"
#import "CRDocument.h"
#import "CROrderedSet.h"

@interface TTOrderedSetVersionedDocument : TTVersionedDocument

@property (readonly) CRDocument *document; // ivar: _document
@property (retain, nonatomic) CROrderedSet *orderedSet; // ivar: _orderedSet


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(NSUInteger)mergeWithOrderedSetVersionedDocument:(id)arg0 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif