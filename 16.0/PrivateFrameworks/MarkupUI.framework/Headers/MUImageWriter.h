// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMAGEWRITER_H
#define MUIMAGEWRITER_H


#import <Foundation/Foundation.h>


@interface MUImageWriter : NSObject



-(BOOL)writeUsingBaseImage:(id)arg0 withAnnotationsFromController:(id)arg1 asImageOfType:(id)arg2 toConsumer:(struct CGDataConsumer *)arg3 embedSourceImageAndAnnotationsAsMetadata:(BOOL)arg4 encryptPrivateMetadata:(BOOL)arg5 error:(*id)arg6 ;
-(id)encodedModelFromAnnotationsController:(id)arg0 encrypt:(BOOL)arg1 ;


@end


#endif