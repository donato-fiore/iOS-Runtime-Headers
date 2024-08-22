// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLECOMPONENT_H
#define SXDATATABLECOMPONENT_H



#import "SXComponent.h"
#import "SXDataRecordStore.h"
#import "SXJSONArray.h"

@interface SXDataTableComponent : SXComponent

@property (readonly, nonatomic) SXDataRecordStore *data;
@property (readonly, nonatomic) NSUInteger dataOrientation;
@property (readonly, nonatomic) BOOL showDescriptorLabels;
@property (readonly, nonatomic) SXJSONArray *sortBy;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(BOOL)showDescriptorLabelsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)dataOrientationWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif