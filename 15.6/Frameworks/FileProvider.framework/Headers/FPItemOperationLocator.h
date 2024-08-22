// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPITEMOPERATIONLOCATOR_H
#define FPITEMOPERATIONLOCATOR_H



#import "FPActionOperationLocator.h"

@interface FPItemOperationLocator : FPActionOperationLocator



+(BOOL)supportsSecureCoding;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(BOOL)isMaterializedOnDisk;
-(BOOL)isProviderItem;
-(BOOL)requiresCrossDeviceCopy;
-(NSUInteger)size;
-(id)description;
-(id)filename;
-(id)identifier;
-(id)parentIdentifier;


@end


#endif