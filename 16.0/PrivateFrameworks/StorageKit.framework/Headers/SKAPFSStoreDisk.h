// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPFSSTOREDISK_H
#define SKAPFSSTOREDISK_H

@class NSString;


#import "SKDisk.h"

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsContainerIdentifier; // ivar: _apfsContainerIdentifier
@property (retain) NSString *apfsContainerUUID; // ivar: _apfsContainerUUID
@property (readonly) NSString *apfsUUID;


-(BOOL)canResize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOurContainerWithDisk:(id)arg0 ;
-(id)container;
-(id)innerDescription;
-(id)minimalDictionaryRepresentation;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif