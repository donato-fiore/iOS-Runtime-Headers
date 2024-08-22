// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTHUMANDETECTIONS_H
#define PTHUMANDETECTIONS_H


#import <Foundation/Foundation.h>


@interface PTHumanDetections : NSObject {
    PTHumanDetection _detectionsRaw;
    PTHumanDetection _detectionsFiltered;
}


@property (readonly) int count; // ivar: _count
@property (readonly) *PTHumanDetection detectionsFiltered;
@property (readonly) *PTHumanDetection detectionsRaw;


-(void)filterDetections;
-(void)initFilterDetections;
-(void)unpactDetections:(id)arg0 ;


@end


#endif