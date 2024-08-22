// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBAPPLICATIONSNAPSHOTFETCHREQUEST_H
#define XBAPPLICATIONSNAPSHOTFETCHREQUEST_H

@class NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBApplicationSnapshotGenerationContext.h"
#import "XBApplicationSnapshotPredicate.h"

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext; // ivar: _fallbackGenerationContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) XBApplicationSnapshotPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;


+(id)fetchRequest;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif