// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASETRANSMISSIONMODELERVIEW_H
#define PHASETRANSMISSIONMODELERVIEW_H


#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASETransmissionModelerView : NSObject

@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine


-(id)initWithEngine:(id)arg0 ;
-(void)beginTrackingAudibleGeometryForSource:(id)arg0 callback:(id)arg1 ;
-(void)beginTrackingSource:(id)arg0 callback:(id)arg1 ;
-(void)endTrackingAudibleGeometryForSource:(id)arg0 ;
-(void)endTrackingSource:(id)arg0 ;
-(void)overrideGeometrySubdivisionForSource:(id)arg0 subdivideGeometry:(BOOL)arg1 ;
-(void)overrideMaximumSampleCountForSource:(id)arg0 count:(NSInteger)arg1 ;
-(void)overrideSampleHistoryLengthForSource:(id)arg0 length:(NSInteger)arg1 ;
-(void)overrideSampleSubdivisionIndexForSource:(id)arg0 index:(NSInteger)arg1 ;


@end


#endif