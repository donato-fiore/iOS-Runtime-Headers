// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MDEXTENSIONLOADER_H
#define _MDEXTENSIONLOADER_H

@class NSMutableArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MDExtensionLoader : NSObject

@property (retain, nonatomic) NSMutableArray *containerIDs; // ivar: _containerIDs
@property (retain, nonatomic) NSMutableArray *containerPaths; // ivar: _containerPaths
@property (retain, nonatomic) NSMutableArray *extensionIdentifiers; // ivar: _extensionIdentifiers
@property (retain, nonatomic) NSDictionary *extensionsByBundleId; // ivar: _extensionsByBundleId
@property BOOL extensionsCacheNeedsLoad; // ivar: _extensionsCacheNeedsLoad
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap; // ivar: _fileProviderBundleMap
@property (retain, nonatomic) id *matchingContext; // ivar: _matchingContext
@property (nonatomic) NSInteger notificationCount; // ivar: _notificationCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *queueLabels; // ivar: _queueLabels


-(id)init;
-(void)findExtensionsWithCompletionBlock:(id)arg0 ;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(id)arg0 ;
-(void)stopLookingForExtensions;


@end


#endif