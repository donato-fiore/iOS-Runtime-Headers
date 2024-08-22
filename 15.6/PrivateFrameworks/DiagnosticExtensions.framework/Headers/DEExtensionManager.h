// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEEXTENSIONMANAGER_H
#define DEEXTENSIONMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DEExtensionManager : NSObject

@property (copy, nonatomic) id *afterExtendedBlock; // ivar: _afterExtendedBlock
@property (nonatomic) BOOL extendedLoaded; // ivar: _extendedLoaded
@property (retain, nonatomic) NSArray *extensions; // ivar: _extensions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue; // ivar: _initialLoadQueue


+(id)sharedInstance;
-(id)extensionForIdentifier:(id)arg0 ;
-(id)extensionsWithFilter:(id)arg0 ;
-(id)init;
-(void)loadExtensions;


@end


#endif