// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDIAGRAMPOINTCHEVRONMAPPER_H
#define CMDIAGRAMPOINTCHEVRONMAPPER_H



#import "CMDiagramPointMapper.h"

@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
    BOOL mPlaceholder;
    BOOL mHomePlate;
}




-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)setIsHomePlate:(BOOL)arg0 ;
-(void)setIsPlaceholder:(BOOL)arg0 ;


@end


#endif