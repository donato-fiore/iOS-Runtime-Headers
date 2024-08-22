// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTEXTKITTAILTRUNCATER_H
#define CKTEXTKITTAILTRUNCATER_H

@class NSAttributedString, NSCharacterSet, NSString;
@protocol CKTextKitTruncating;

#import <Foundation/Foundation.h>

#import "CKTextKitContext.h"

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating>

 {
    CKTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    CGSize _constrainedSize;
    ? _visibleRanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect truncationStringRect; // ivar: _truncationStringRect
@property ? visibleRanges;


-(NSUInteger)_calculateCharacterIndexBeforeTruncationMessage:(id)arg0 textStorage:(id)arg1 textContainer:(id)arg2 ;
-(NSUInteger)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(NSUInteger)arg0 layoutManager:(id)arg1 textStorage:(id)arg2 ;
-(id)initWithContext:(id)arg0 truncationAttributedString:(id)arg1 avoidTailTruncationSet:(id)arg2 constrainedSize:(struct CGSize )arg3 ;


@end


#endif