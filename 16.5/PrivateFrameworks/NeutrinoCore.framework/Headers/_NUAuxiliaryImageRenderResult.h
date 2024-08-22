// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUAUXILIARYIMAGERENDERRESULT_H
#define _NUAUXILIARYIMAGERENDERRESULT_H

@class NURenderResult, NSString;
@protocol NUAuxiliaryImageRenderResult, NUAuxiliaryImage, NURenderStatistics;



@interface _NUAuxiliaryImageRenderResult : NURenderResult <NUAuxiliaryImageRenderResult>



@property (retain) NSObject<NUAuxiliaryImage> *auxiliaryImage; // ivar: _auxiliaryImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif