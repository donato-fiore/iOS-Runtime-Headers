// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPGSVSECTIONHEADERLAYOUTSTATE_H
#define PKPGSVSECTIONHEADERLAYOUTSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PKPGSVSectionHeaderContext.h"

@interface PKPGSVSectionHeaderLayoutState : NSObject {
    PKPGSVSectionHeaderContext *_context;
    CGFloat _headerOpacity;
    NSArray *_subheaderLayoutStates;
    CGRect _headerContainerRect;
}




-(id)init;


@end


#endif