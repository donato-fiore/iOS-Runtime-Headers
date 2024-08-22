// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDCHARTBUILD_H
#define PDCHARTBUILD_H



#import "PDBuild.h"

@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBuildType:(int)arg0 ;
-(int)type;
-(void)setType:(int)arg0 ;


@end


#endif