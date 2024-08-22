// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFAPPLICATIONCONTEXTSNAPSHOTMUTATION_H
#define _AFAPPLICATIONCONTEXTSNAPSHOTMUTATION_H

@class NSArray, NSString;
@protocol AFApplicationContextSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFApplicationContextSnapshot.h"

@interface _AFApplicationContextSnapshotMutation : NSObject <AFApplicationContextSnapshotMutating>

 {
    AFApplicationContextSnapshot *_baseModel;
    NSArray *_applicationContexts;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setApplicationContexts:(id)arg0 ;


@end


#endif