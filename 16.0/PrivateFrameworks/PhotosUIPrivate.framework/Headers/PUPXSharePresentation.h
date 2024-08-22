// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXSHAREPRESENTATION_H
#define PUPXSHAREPRESENTATION_H

@class NSString;
@protocol PXSharePresentation;

#import <Foundation/Foundation.h>


@interface PUPXSharePresentation : NSObject <PXSharePresentation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createActivitySharingControllerWithContext:(id)arg0 ;
-(id)createActivitySharingControllerWithContext:(id)arg0 selectedAssetIndexSet:(id)arg1 ;
-(id)defaultActivityTypeOrder;


@end


#endif