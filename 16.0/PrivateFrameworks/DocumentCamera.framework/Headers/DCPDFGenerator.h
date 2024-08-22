// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCPDFGENERATOR_H
#define DCPDFGENERATOR_H

@class NSMutableData, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface DCPDFGenerator : NSObject {
    *CGContext _pdfContext;
}


@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) CGRect pageRect; // ivar: _pageRect
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url;


-(BOOL)startGenerating;
-(id)init;
-(id)initWithMutableData:(id)arg0 pageRect:(struct CGRect )arg1 title:(id)arg2 ;
-(id)initWithURL:(id)arg0 pageRect:(struct CGRect )arg1 title:(id)arg2 ;
-(void)addPageWithPageRect:(struct CGRect )arg0 renderBlock:(id)arg1 ;
-(void)addPageWithRenderBlock:(id)arg0 ;
-(void)dealloc;
-(void)finishGenerating;


@end


#endif