// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPRENDERINGEXPORTERPAGEENTRY_H
#define TPRENDERINGEXPORTERPAGEENTRY_H


#import <Foundation/Foundation.h>


@interface TPRenderingExporterPageEntry : NSObject

@property (nonatomic) NSUInteger commentOverflowPageIndex; // ivar: _commentOverflowPageIndex
@property (nonatomic) NSUInteger documentPageIndex; // ivar: _documentPageIndex
@property (nonatomic) NSUInteger firstAnnotationNumber; // ivar: _firstAnnotationNumber
@property (readonly, nonatomic) BOOL isDocumentPage;


-(id)description;


@end


#endif