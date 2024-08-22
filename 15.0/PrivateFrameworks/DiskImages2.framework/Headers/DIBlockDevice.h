// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIBLOCKDEVICE_H
#define DIBLOCKDEVICE_H

@class NSString;


#import "DIIOObject.h"

@interface DIBlockDevice : DIIOObject

@property (readonly) BOOL diskImageDevice;
@property (readonly, copy) NSString *mediumType;


+(id)copyUnmatchedDiskImageWithRegEntryID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyIOMediaWithError:(*id)arg0 ;
-(id)copyRootBlockDeviceWithError:(*id)arg0 ;


@end


#endif