// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSHAREDLIBRARYSETTINGSSECTION_H
#define _PXSHAREDLIBRARYSETTINGSSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _PXSharedLibrarySettingsSection : NSObject

@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *title; // ivar: _title


-(void)addItemWithConfigurationHandler:(id)arg0 ;


@end


#endif