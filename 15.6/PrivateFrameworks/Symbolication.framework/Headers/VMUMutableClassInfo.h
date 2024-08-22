// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUMUTABLECLASSINFO_H
#define VMUMUTABLECLASSINFO_H

@class NSString;


#import "VMUClassInfo.h"

@interface VMUMutableClassInfo : VMUClassInfo

@property (copy, nonatomic) NSString *binaryPath;
@property (nonatomic) unsigned int defaultScanType;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned int instanceSize;
@property (nonatomic) BOOL isCoreMediaFigObject;
@property (retain, nonatomic) VMUClassInfo *superclassInfo;


// -(void)addComplexAction:(id)arg0 withEvaluator:(unk)arg1  ;
-(void)addFields:(id)arg0 ;
-(void)addVariant:(id)arg0 forField:(id)arg1 withEvaluator:(id)arg2 ;
-(void)addVariantRecursively:(id)arg0 forField:(id)arg1 withEvaluator:(id)arg2 ;
-(void)mutateTypeFieldsRecursivelyWithBlock:(id)arg0 ;
-(void)mutateTypeFieldsWithBlock:(id)arg0 ;
-(void)replaceField:(id)arg0 withFields:(id)arg1 ;
-(void)replaceFieldRecursively:(id)arg0 withField:(id)arg1 ;
-(void)setFields:(id)arg0 ;
-(void)setVariantScanType:(unsigned int)arg0 withEvaluator:(id)arg1 ;


@end


#endif