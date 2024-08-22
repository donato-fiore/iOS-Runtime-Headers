// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MISTASHEDBUNDLECONTAINER_H
#define MISTASHEDBUNDLECONTAINER_H

@class NSURL;


#import "MIRelocatedBundleContainer.h"
#import "MIStashMetadata.h"

@interface MIStashedBundleContainer : MIRelocatedBundleContainer

@property (retain, nonatomic) MIStashMetadata *stashMetadata; // ivar: _stashMetadata
@property (readonly, nonatomic) NSURL *stashMetadataURL;


-(BOOL)saveStashMetadata:(id)arg0 withError:(*id)arg1 ;
-(id)newStashMetadata;
-(id)stashMetadataWithError:(*id)arg0 ;


@end


#endif