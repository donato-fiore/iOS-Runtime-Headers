// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTATICCLOUDKITCONTAINERPROVIDER_H
#define PFSTATICCLOUDKITCONTAINERPROVIDER_H

@class CKContainer;


#import "PFCloudKitContainerProvider.h"

@interface PFStaticCloudKitContainerProvider : PFCloudKitContainerProvider

@property (readonly, nonatomic) CKContainer *container; // ivar: _container


-(id)containerWithIdentifier:(id)arg0 ;
-(id)containerWithIdentifier:(id)arg0 options:(id)arg1 ;
-(id)initWithContainer:(id)arg0 ;
-(void)dealloc;


@end


#endif