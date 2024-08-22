// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSEARCHFOUNDATIONBUSINESSREVIEWRICHTEXT_H
#define MKSEARCHFOUNDATIONBUSINESSREVIEWRICHTEXT_H



#import "MKSearchFoundationRichText.h"

@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText

@property (getter=isReviewResolved) BOOL reviewResolved; // ivar: _reviewResolved


-(BOOL)isRichTextResolved;
-(void)resolveReviewStringWithProviderNameByMapItem:(id)arg0 lines:(id)arg1 temporaryReviewString:(id)arg2 ;
-(void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg0 lines:(id)arg1 temporaryReviewString:(id)arg2 ;


@end


#endif