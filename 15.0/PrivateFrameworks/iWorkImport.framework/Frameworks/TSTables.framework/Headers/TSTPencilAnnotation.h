// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTPENCILANNOTATION_H
#define TSTPENCILANNOTATION_H

@class TSPObject, NSString, TSDPencilAnnotationStorage;
@protocol TSKPencilAnnotation;


#import "TSTTableInfo.h"

@interface TSTPencilAnnotation : TSPObject <TSKPencilAnnotation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // ivar: _pencilAnnotationStorage
@property (readonly) Class superclass;
@property (weak, nonatomic) TSTTableInfo *table; // ivar: _table
@property (readonly, nonatomic) NSString *uuid;


+(BOOL)needsObjectUUID;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 tableInfo:(id)arg1 pencilAnnotationStorage:(id)arg2 ;
-(id)initWithTableInfo:(id)arg0 pencilAnnotationStorage:(id)arg1 ;
-(struct TSUCellRect )_cellRange;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif