// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCOMMENTHOSTING_H
#define TSTCOMMENTHOSTING_H

@class TSDCommentStorage, NSString, TSKAnnotationAuthor, NSDate;
@protocol TSDComment;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTCommentHosting : NSObject <TSDComment>

 {
    TSDCommentStorage *mStorage;
}


@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) NSString *annotationUUID; // ivar: _annotationUUID
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) TSUModelCellCoord baseCellCoord;
@property (readonly, nonatomic) TSKUIDStructCoord cellUID; // ivar: _cellUID
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHighlight;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (readonly, nonatomic) TSUViewCellCoord viewCellCoord;


-(BOOL)isFloatingComment;
-(BOOL)isInDocument;
-(Class)editorClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStorage:(id)arg0 forTableInfo:(id)arg1 baseCellCoord:(struct TSUModelCellCoord )arg2 ;
-(id)initWithStorage:(id)arg0 forTableInfo:(id)arg1 cellUID:(struct TSKUIDStructCoord )arg2 ;
-(void)commentWillBeAddedToDocumentRoot;


@end


#endif