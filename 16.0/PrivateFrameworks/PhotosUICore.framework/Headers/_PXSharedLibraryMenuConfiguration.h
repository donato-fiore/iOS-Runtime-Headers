// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSHAREDLIBRARYMENUCONFIGURATION_H
#define _PXSHAREDLIBRARYMENUCONFIGURATION_H

@protocol PXSharedLibraryMenuConfiguration;

#import <Foundation/Foundation.h>

#import "PXMenuBuilder.h"

@interface _PXSharedLibraryMenuConfiguration : NSObject <PXSharedLibraryMenuConfiguration>



@property (readonly, nonatomic) PXMenuBuilder *extraItemsMenuBuilder; // ivar: _extraItemsMenuBuilder


-(id)initWithMenuBuilder:(id)arg0 ;


@end


#endif