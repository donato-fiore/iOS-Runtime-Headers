// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDELECTROCARDIOGRAMACTIVITYITEMSOURCE_H
#define WDELECTROCARDIOGRAMACTIVITYITEMSOURCE_H

@class NSString, NSURL;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *pdfTemporaryFileURL; // ivar: _pdfTemporaryFileURL
@property (nonatomic) NSUInteger provenance; // ivar: _provenance
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithPDFData:(id)arg0 sampleDate:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 provenance:(NSUInteger)arg4 ;
-(id)pdfFileNameForSampleDate:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 ;
-(void)dealloc;


@end


#endif