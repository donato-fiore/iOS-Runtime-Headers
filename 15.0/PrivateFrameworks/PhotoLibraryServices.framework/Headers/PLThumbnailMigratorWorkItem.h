// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTHUMBNAILMIGRATORWORKITEM_H
#define PLTHUMBNAILMIGRATORWORKITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"

@interface PLThumbnailMigratorWorkItem : NSObject

@property (retain, nonatomic) PLManagedAsset *asset; // ivar: _asset
@property (nonatomic) NSUInteger destinationThumbnailIndex; // ivar: _destinationThumbnailIndex
@property (copy, nonatomic) NSString *masterThumbFilePath; // ivar: _masterThumbFilePath
@property (nonatomic) BOOL succeeded; // ivar: _succeeded
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid




@end


#endif