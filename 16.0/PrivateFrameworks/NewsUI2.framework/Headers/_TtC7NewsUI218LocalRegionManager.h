// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI218LOCALREGIONMANAGER_H
#define _TTC7NEWSUI218LOCALREGIONMANAGER_H

@class SwiftObject;
@protocol FCLocalRegionManager;



@interface _TtC7NewsUI218LocalRegionManager : SwiftObject <FCLocalRegionManager>

 {
    ? locationManager;
    ? localAreasManager;
}




-(void)fetchLocalAreas:(id)arg0 ;
-(void)fetchRegions:(id)arg0 ;


@end


#endif