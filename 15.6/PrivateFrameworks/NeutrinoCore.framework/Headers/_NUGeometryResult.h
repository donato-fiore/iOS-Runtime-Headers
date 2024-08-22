// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUGEOMETRYRESULT_H
#define _NUGEOMETRYRESULT_H

@class NURenderResult, NSString;
@protocol NUGeometryResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUGeometryResult : NURenderResult <NUGeometryResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif