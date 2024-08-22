// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFPDFDOCUMENT_H
#define IFPDFDOCUMENT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface IFPDFDocument : NSObject

@property (readonly) NSUInteger numberOfPages;
@property *CGPDFDocument pdfDocument; // ivar: _pdfDocument
@property (readonly) NSURL *url; // ivar: _url


-(id)firstPage;
-(id)initWithURL:(id)arg0 ;
-(id)pageAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif