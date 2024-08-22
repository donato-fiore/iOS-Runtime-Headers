// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSIMULATEDFAILINGMEDIAREQUEST_H
#define _PXSIMULATEDFAILINGMEDIAREQUEST_H

@class PXSimulatedMediaRequest, NSError;



@interface _PXSimulatedFailingMediaRequest : PXSimulatedMediaRequest {
    NSError *_error;
    BOOL _didReturnError;
}




-(id)initWithWrappedMediaRequest:(id)arg0 error:(id)arg1 ;
-(void)handleOriginalResult:(id)arg0 info:(id)arg1 ;


@end


#endif