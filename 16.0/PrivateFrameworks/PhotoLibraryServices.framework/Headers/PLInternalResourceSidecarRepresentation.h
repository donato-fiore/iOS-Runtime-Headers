// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLINTERNALRESOURCESIDECARREPRESENTATION_H
#define PLINTERNALRESOURCESIDECARREPRESENTATION_H

@class NSDate, NSNumber, NSString, NSURL, NSManagedObjectID;
@protocol PLSidecar;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"
#import "PLInternalResource.h"

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar>



@property (readonly, nonatomic) PLManagedAsset *asset;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) NSNumber *compressedSize;
@property (readonly, nonatomic) NSUInteger compressedSizeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *index;
@property (readonly, nonatomic) short indexValue;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSString *originalFilename;
@property (nonatomic) NSInteger ptpTrashedState;
@property (weak, nonatomic) PLInternalResource *resource; // ivar: _resource
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;


-(id)extension;
-(id)initWithResource:(id)arg0 ;


@end


#endif