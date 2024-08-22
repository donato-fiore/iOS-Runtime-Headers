// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPKIMAGEWRITER_H
#define PPKIMAGEWRITER_H


#import <Foundation/Foundation.h>


@interface PPKImageWriter : NSObject



-(BOOL)writeUsingBaseImage:(id)arg0 annotationImage:(struct CGImage *)arg1 asImageOfType:(id)arg2 toConsumer:(struct CGDataConsumer *)arg3 annotationMetadata:(id)arg4 modifiedImageDescription:(id)arg5 encryptPrivateMetadata:(BOOL)arg6 error:(*id)arg7 ;


@end


#endif