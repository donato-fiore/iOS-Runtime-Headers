// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCANVASSEARCHREFERENCE_H
#define TSDCANVASSEARCHREFERENCE_H

@class NSString, NSArray;
@protocol TSKSearchReference, TSDCanvasSelection, TSKAnnotation;

#import <Foundation/Foundation.h>

#import "TSDDrawableInfo.h"
#import "TSKDocumentRoot.h"

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference>

 {
    id<TSDCanvasSelection> *mCanvasSelection;
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
}


@property (retain, nonatomic) NSObject<TSKAnnotation> *annotation; // ivar: mAnnotation
@property (nonatomic) BOOL autohideHighlight; // ivar: mAutohideHighlight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *findHighlights; // ivar: mFindHighlights
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pulseHighlight; // ivar: mPulseHighlight
@property (nonatomic) CGPoint searchReferencePoint; // ivar: mSearchReferencePoint
@property (readonly) Class superclass;


+(id)searchReferenceWithDrawableInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReplaceable;
-(id)commandForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)drawableInfo;
-(id)initWithDrawableInfo:(id)arg0 ;
-(id)model;
-(id)searchReferenceEnd;
-(id)searchReferenceForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 authorCreatedWithCommand:(*id)arg2 ;
-(id)searchReferenceStart;
-(id)selection;
-(void)dealloc;


@end


#endif