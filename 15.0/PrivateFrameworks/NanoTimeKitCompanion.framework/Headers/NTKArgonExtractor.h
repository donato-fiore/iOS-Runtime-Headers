// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONEXTRACTOR_H
#define NTKARGONEXTRACTOR_H

@class NSString, NSMapTable, NSMutableOrderedSet;
@protocol NTKArgonExtractorProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKArgonExtractorOperation.h"

@interface NTKArgonExtractor : NSObject <NTKArgonExtractorProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *extractionCallbacksByDescriptor; // ivar: _extractionCallbacksByDescriptor
@property (readonly, nonatomic) NSString *extractionPath; // ivar: _extractionPath
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKArgonExtractorOperation *performingOperation; // ivar: _performingOperation
@property (readonly, nonatomic) NSMutableOrderedSet *queuedKeyDescriptorOperations; // ivar: _queuedKeyDescriptorOperations
@property (readonly, nonatomic) NSMapTable *removalCallbacksByDescriptor; // ivar: _removalCallbacksByDescriptor
@property (readonly, nonatomic) NSString *sourcePath; // ivar: _sourcePath
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithSourcePath:(id)arg0 extractionPath:(id)arg1 ;
-(void)_queue_extractKeyDescriptor:(id)arg0 ;
-(void)_queue_extractUsingKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)_queue_performNextOperationIfNeeded;
-(void)_queue_removeKeyDescriptor:(id)arg0 ;
-(void)_queue_removeKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)extractUsingKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)removeExtractedKeyDescriptor:(id)arg0 completion:(id)arg1 ;


@end


#endif