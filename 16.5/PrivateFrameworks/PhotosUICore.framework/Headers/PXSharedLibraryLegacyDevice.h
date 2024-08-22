// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYLEGACYDEVICE_H
#define PXSHAREDLIBRARYLEGACYDEVICE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryLegacyDevice : NSObject

@property (readonly, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) NSString *instructions;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger operatingSystem; // ivar: _operatingSystem
@property (readonly, nonatomic) BOOL upgradeable; // ivar: _upgradeable


-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 iconData:(id)arg1 operatingSystem:(NSInteger)arg2 upgradeable:(BOOL)arg3 ;


@end


#endif