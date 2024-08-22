// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKCOUPDATEIDOPERATION_H
#define TSKCOUPDATEIDOPERATION_H



#import "TSKCOUpdateOperation.h"

@interface TSKCOUpdateIdOperation : TSKCOUpdateOperation



+(id)operationWithAddress:(*void)arg0 propertyId:(unsigned short)arg1 ;
+(id)operationWithUUIDPath:(id)arg0 propertyId:(unsigned short)arg1 ;
-(id)initWithAddress:(*void)arg0 propertyId:(unsigned short)arg1 ;
-(id)initWithAddress:(*void)arg0 propertyId:(unsigned short)arg1 noop:(BOOL)arg2 ;
-(id)initWithAddress:(*void)arg0 propertyType:(struct ? *)arg1 noop:(BOOL)arg2 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)operationWithNewNoop:(BOOL)arg0 ;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif