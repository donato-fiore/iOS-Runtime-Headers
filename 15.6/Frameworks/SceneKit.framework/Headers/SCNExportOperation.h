// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNEXPORTOPERATION_H
#define SCNEXPORTOPERATION_H

@class NSOperation;



@interface SCNExportOperation : NSOperation



-(BOOL)canceled;
-(BOOL)succeded;
-(CGFloat)progress;
-(id)error;


@end


#endif