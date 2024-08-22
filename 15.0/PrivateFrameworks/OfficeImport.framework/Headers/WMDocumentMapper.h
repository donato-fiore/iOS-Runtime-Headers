// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WMDOCUMENTMAPPER_H
#define WMDOCUMENTMAPPER_H

@class NSString;
@protocol CMMapperRoot;


#import "CMDocumentMapper.h"
#import "WDDocument.h"

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot>

 {
    NSString *mFileName;
}


@property (readonly) WDDocument *document;


-(BOOL)hasSessionBreakAtIndex:(NSUInteger)arg0 ;
-(CGFloat)bottomMargin;
-(CGFloat)headerMargin;
-(CGFloat)leftMargin;
-(CGFloat)rightMargin;
-(CGFloat)topMargin;
-(id)archiver;
-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)fileName;
-(id)styleMatrix;
-(int)defaultTabWidth;
-(struct CGSize )contentSizeForDevice;
-(struct CGSize )pageSizeForDevice;
-(void)mapDefaultCssStylesAt:(id)arg0 ;
-(void)mapWithState:(id)arg0 ;
-(void)setFileName:(id)arg0 ;


@end


#endif