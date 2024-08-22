// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACECOMPLICATIONCONFIGURATION_H
#define NTKFACECOMPLICATIONCONFIGURATION_H

@class NSString;
@protocol NTKFaceComplicationConfiguration;

#import <Foundation/Foundation.h>


@interface NTKFaceComplicationConfiguration : NSObject <NTKFaceComplicationConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultLocalizedNameForComplicationSlot:(id)arg0 ;
-(BOOL)complicationExistenceInvalidatesSnapshot;
-(id)complicationSlotDescriptors;
-(id)defaultSelectedComplicationSlotForDevice:(id)arg0 ;
-(id)localizedNameForComplicationSlot:(id)arg0 ;
-(id)orderedComplicationSlots;
-(id)richComplicationSlotsForDevice:(id)arg0 ;


@end


#endif