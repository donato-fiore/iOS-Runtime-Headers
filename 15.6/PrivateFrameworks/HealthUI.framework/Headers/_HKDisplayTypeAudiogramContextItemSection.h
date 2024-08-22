// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKDISPLAYTYPEAUDIOGRAMCONTEXTITEMSECTION_H
#define _HKDISPLAYTYPEAUDIOGRAMCONTEXTITEMSECTION_H

@class UIAction, NSString, NSArray;
@protocol HKDisplayTypeContextItemSection;

#import <Foundation/Foundation.h>


@interface _HKDisplayTypeAudiogramContextItemSection : NSObject <HKDisplayTypeContextItemSection>



@property (retain, nonatomic) UIAction *accessoryButtonAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title




@end


#endif