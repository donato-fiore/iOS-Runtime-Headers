// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPZONEFILTER_H
#define CPZONEFILTER_H


#import <Foundation/Foundation.h>

#import "CPPage.h"

@interface CPZoneFilter : NSObject {
    CPPage *page;
    CGFloat minArea;
}




+(void)filterZonesInPage:(id)arg0 ;
-(id)initWithPage:(id)arg0 ;
-(void)filterZonesInZone:(id)arg0 ;
-(void)findBackgroundGraphicsInZone:(id)arg0 ;
-(void)findUsedGraphicsInZone:(id)arg0 ;


@end


#endif