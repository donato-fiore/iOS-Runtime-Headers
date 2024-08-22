// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFDETECTEDFORMFIELD_H
#define PDFDETECTEDFORMFIELD_H


#import <Foundation/Foundation.h>


@interface PDFDetectedFormField : NSObject

@property NSInteger index; // ivar: _index
@property NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) CGFloat maxX;
@property (readonly, nonatomic) CGFloat minX;
@property NSInteger numberOfSegments; // ivar: _numberOfSegments
@property CGRect rect; // ivar: _rect
@property CGFloat segmentWidth; // ivar: _segmentWidth


-(BOOL)canBeMergedWith:(id)arg0 ;
-(CGFloat)maxY;
-(CGFloat)minY;
-(id)initWithRect:(struct CGRect )arg0 andKind:(NSInteger)arg1 ;


@end


#endif