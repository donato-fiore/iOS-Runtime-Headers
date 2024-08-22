// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUIMAGEDATARESULT_H
#define _NUIMAGEDATARESULT_H

@class NURenderResult, NSDictionary, NSString;
@protocol NUImageDataResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUImageDataResult : NURenderResult <NUImageDataResult>



@property (copy) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif