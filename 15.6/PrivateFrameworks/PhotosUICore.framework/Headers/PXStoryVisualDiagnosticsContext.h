// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVISUALDIAGNOSTICSCONTEXT_H
#define PXSTORYVISUALDIAGNOSTICSCONTEXT_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PXStoryVisualDiagnosticsConfiguration.h"

@interface PXStoryVisualDiagnosticsContext : NSObject

@property (readonly, nonatomic) *CGContext CGContext; // ivar: _CGContext
@property (readonly, nonatomic) PXStoryVisualDiagnosticsConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CGRect currentPageBounds; // ivar: _currentPageBounds
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL isPrivateDataAllowed;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 dataConsumer:(struct CGDataConsumer *)arg1 ;
// -(void)addPagesForTableWithConfiguration:(id)arg0 columnsConfiguration:(unk)arg1 rowsConfiguration:(id)arg2  ;
-(void)addTitlePageWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)beginPage;
-(void)beginPageWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)drawImageInRect:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)drawTextInRect:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)endPage;
-(void)fillRect:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)strokeRect:(struct CGRect )arg0 configuration:(id)arg1 ;


@end


#endif