// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXOUTLINEDATASECTIONMANAGER_H
#define PXOUTLINEDATASECTIONMANAGER_H

@class NSDictionary;
@protocol PXOutlineDataSectionManagerDelegate;


#import "PXDataSectionManager.h"

@interface PXOutlineDataSectionManager : PXDataSectionManager {
    NSDictionary *_dataSectionManagersByDataSectionObjects;
}


@property (weak, nonatomic) NSObject<PXOutlineDataSectionManagerDelegate> *delegate; // ivar: _delegate


-(NSUInteger)childChangeDescriptorsInvalidatingDataSection;
-(id)_changeDetailsForNewDataSection:(id)arg0 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg0 childChangeDetails:(id)arg1 ;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg0 ;
-(id)childDataSectionManagerForOutlineObject:(id)arg0 ;
-(id)createDataSection;
-(void)rearrangeSectionContent;


@end


#endif