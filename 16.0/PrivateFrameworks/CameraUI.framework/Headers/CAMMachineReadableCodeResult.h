// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMACHINEREADABLECODERESULT_H
#define CAMMACHINEREADABLECODERESULT_H

@class NSString, AVMetadataMachineReadableCodeObject, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMMachineReadableCodeResult : NSObject <CAMMetadataObjectResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolString;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject; // ivar: _underlyingMachineReadableCodeObject
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isOfSignificantSize;
-(NSInteger)mrcType;
-(id)initWithMachineReadableCodeObject:(id)arg0 ;


@end


#endif