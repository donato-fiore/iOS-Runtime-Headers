// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDDRAWABLECOMMENT_H
#define TSDDRAWABLECOMMENT_H

@class TSKSosBase, NSString, TSKAnnotationAuthor, NSDate;
@protocol TSDComment;


#import "TSDCommentStorage.h"
#import "TSDDrawableInfo.h"

@interface TSDDrawableComment : TSKSosBase <TSDComment>

 {
    TSDCommentStorage *mStorage;
}


@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) NSString *annotationUUID; // ivar: _annotationUUID
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHighlight;
@property (weak, nonatomic) TSDDrawableInfo *parent; // ivar: _parent
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;


-(BOOL)isFloatingComment;
-(BOOL)isInDocument;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParent:(id)arg0 storage:(id)arg1 ;
-(void)commentWillBeAddedToDocumentRoot;


@end


#endif