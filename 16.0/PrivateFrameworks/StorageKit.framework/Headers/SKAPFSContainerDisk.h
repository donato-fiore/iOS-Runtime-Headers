// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPFSCONTAINERDISK_H
#define SKAPFSCONTAINERDISK_H

@class NSString;


#import "SKDisk.h"

@interface SKAPFSContainerDisk : SKDisk

@property (readonly) NSString *apfsUUID;
@property (retain) NSString *designatedPSUUID; // ivar: _designatedPSUUID


-(BOOL)isVirtualDiskType;
-(id)copyVolumesWithIncludeSnapshots:(BOOL)arg0 ;
-(id)designatedPhysicalStore;
-(id)dictionaryRepresentation;
-(id)innerDescription;
-(id)minimalDictionaryRepresentation;
-(id)physicalStores;
-(id)volumes;
-(id)volumesExcludingSnapshots;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif