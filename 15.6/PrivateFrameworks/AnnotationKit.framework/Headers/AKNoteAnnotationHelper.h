// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKNOTEANNOTATIONHELPER_H
#define AKNOTEANNOTATIONHELPER_H


#import <Foundation/Foundation.h>


@interface AKNoteAnnotationHelper : NSObject



+(id)newPopupAnnotationWithParent:(id)arg0 onPageController:(id)arg1 ;
+(struct CGRect )_boundsForClosedPopupAnnotation:(id)arg0 havingParent:(id)arg1 onPageController:(id)arg2 ;
+(struct CGRect )_boundsForOpenPopupAnnotation:(id)arg0 withClosedBounds:(struct CGRect )arg1 havingParent:(id)arg2 onPageController:(id)arg3 ;


@end


#endif