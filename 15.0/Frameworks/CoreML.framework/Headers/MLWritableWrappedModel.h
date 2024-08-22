// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLWRITABLEWRAPPEDMODEL_H
#define MLWRITABLEWRAPPEDMODEL_H

@class NSString;
@protocol MLWritable;


#import "MLWrappedModel.h"

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)wrapperAroundWritableModel:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;


@end


#endif