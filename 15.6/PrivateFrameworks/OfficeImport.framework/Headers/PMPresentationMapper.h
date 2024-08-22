// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPRESENTATIONMAPPER_H
#define PMPRESENTATIONMAPPER_H

@class NSMutableArray, NSString;
@protocol CMMapperRoot;


#import "CMDocumentMapper.h"
#import "OIXMLDocument.h"
#import "OIXMLElement.h"
#import "PDPresentation.h"

@interface PMPresentationMapper : CMDocumentMapper <CMMapperRoot>

 {
    int mWidth;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    BOOL mHasPushedFirstSlides;
}


@property (readonly) PDPresentation *document;


-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)defaultStyleSheet;
-(id)initWithDocument:(id)arg0 archiver:(id)arg1 ;
-(struct CGSize )pageSizeForDevice;
-(struct CGSize )pageSizeForDeviceIncludingMargins:(BOOL)arg0 ;
-(struct CGSize )slideSize;
-(void)_pushEmptySlideWithMessage:(id)arg0 ;
-(void)finishMappingWithState:(id)arg0 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)setHtmlDocumentSizeInArchiver;
-(void)startMappingWithState:(id)arg0 ;


@end


#endif