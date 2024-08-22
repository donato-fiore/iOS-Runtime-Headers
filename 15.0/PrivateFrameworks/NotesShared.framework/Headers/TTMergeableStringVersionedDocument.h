// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTMERGEABLESTRINGVERSIONEDDOCUMENT_H
#define TTMERGEABLESTRINGVERSIONEDDOCUMENT_H



#import "TTVersionedDocument.h"
#import "TTMergeableAttributedString.h"

@interface TTMergeableStringVersionedDocument : TTVersionedDocument

@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString; // ivar: _mergeableString


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(NSUInteger)mergeWithStringVersionedDocument:(id)arg0 ;
-(id)initWithMergeableString:(id)arg0 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif