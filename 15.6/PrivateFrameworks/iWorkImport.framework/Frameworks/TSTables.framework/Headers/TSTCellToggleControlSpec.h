// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLTOGGLECONTROLSPEC_H
#define TSTCELLTOGGLECONTROLSPEC_H



#import "TSTCellSpec.h"

@interface TSTCellToggleControlSpec : TSTCellSpec



+(id)cellSpecFromTSKFormat:(id)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)toggleControlSpec;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateFormatAndValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)asToggleControlSpec;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(unsigned int)interactionType;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif