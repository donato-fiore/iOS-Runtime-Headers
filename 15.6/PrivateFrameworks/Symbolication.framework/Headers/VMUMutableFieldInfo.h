// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUMUTABLEFIELDINFO_H
#define VMUMUTABLEFIELDINFO_H

@class NSString;


#import "VMUFieldInfo.h"
#import "VMUClassInfo.h"

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (retain, nonatomic) VMUClassInfo *destinationLayout;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL isByref;
@property (nonatomic) BOOL isCapture;
@property (copy, nonatomic) NSString *ivarName;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) unsigned int scannableSize;
@property (nonatomic) unsigned int stride;
@property (copy, nonatomic) NSString *typeName;


-(BOOL)replaceFieldRecursively:(id)arg0 withField:(id)arg1 ;
-(void)addSubField:(id)arg0 ;
// -(void)mutateTypeFieldsRecursivelyWithBlock:(id)arg0 parentOffset:(unk)arg1  ;
-(void)setKind:(unsigned int)arg0 ;
-(void)setOffset:(unsigned int)arg0 ;
-(void)setSize:(unsigned int)arg0 ;


@end


#endif