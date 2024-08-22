// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFUBIQUITYSTACK_H
#define _PFUBIQUITYSTACK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"
#import "PFUbiquityMetadataFactoryEntry.h"
#import "PFUbiquityLocation.h"

@interface _PFUbiquityStack : NSObject {
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif