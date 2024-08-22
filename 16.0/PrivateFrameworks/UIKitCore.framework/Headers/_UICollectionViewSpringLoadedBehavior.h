// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWSPRINGLOADEDBEHAVIOR_H
#define _UICOLLECTIONVIEWSPRINGLOADEDBEHAVIOR_H

@class NSString;
@protocol UISpringLoadedInteractionBehavior;

#import <Foundation/Foundation.h>


@interface _UICollectionViewSpringLoadedBehavior : NSObject <UISpringLoadedInteractionBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;


@end


#endif