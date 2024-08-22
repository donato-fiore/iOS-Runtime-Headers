// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPLICATIONPICKERBASEVIEWCONFIGURATION_H
#define NTKCOMPLICATIONPICKERBASEVIEWCONFIGURATION_H

@protocol NTKComplicationPickerListProvider;

#import <Foundation/Foundation.h>


@interface NTKComplicationPickerBaseViewConfiguration : NSObject

@property (readonly, nonatomic) NSObject<NTKComplicationPickerListProvider> *listProvider; // ivar: _listProvider


-(id)initWithListProvider:(id)arg0 ;


@end


#endif