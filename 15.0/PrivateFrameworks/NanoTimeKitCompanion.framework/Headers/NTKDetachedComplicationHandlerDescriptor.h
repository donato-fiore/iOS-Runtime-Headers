// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDETACHEDCOMPLICATIONHANDLERDESCRIPTOR_H
#define NTKDETACHEDCOMPLICATIONHANDLERDESCRIPTOR_H

@class NSString;
@protocol NTKTemplateComplicationDisplay;

#import <Foundation/Foundation.h>

#import "NTKComplication.h"

@interface NTKDetachedComplicationHandlerDescriptor : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NTKComplication *complication; // ivar: _complication
@property (weak, nonatomic) NSObject<NTKTemplateComplicationDisplay> *display; // ivar: _display
@property (nonatomic) NSInteger family; // ivar: _family
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier




@end


#endif