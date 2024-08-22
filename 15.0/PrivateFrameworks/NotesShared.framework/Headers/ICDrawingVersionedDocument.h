// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDRAWINGVERSIONEDDOCUMENT_H
#define ICDRAWINGVERSIONEDDOCUMENT_H



#import "TTVersionedDocument.h"
#import "ICDrawing.h"

@interface ICDrawingVersionedDocument : TTVersionedDocument

@property (readonly, nonatomic) ICDrawing *drawing; // ivar: _drawing


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(NSUInteger)mergeWithDrawingVersionedDocument:(id)arg0 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif