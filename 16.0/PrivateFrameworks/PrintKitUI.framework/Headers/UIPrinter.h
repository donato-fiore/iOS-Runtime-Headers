// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTER_H
#define UIPRINTER_H

@class NSURL, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface UIPrinter : NSObject {
    id *_printerInfo;
}


@property (readonly, copy) NSURL *URL; // ivar: URL
@property (readonly, copy) NSString *displayLocation;
@property (readonly, copy) NSString *displayName;
@property (readonly) NSArray *finishingTemplates;
@property (readonly) NSArray *loadedPapers;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) NSArray *outputBins;
@property (readonly) NSArray *printerFinishingOptions;
@property (retain) NSDictionary *printerInfoDict; // ivar: _printerInfoDict
@property (readonly) NSInteger supportedJobTypes;
@property (readonly) NSArray *supportedMediaTypes;
@property (readonly) NSArray *supportedPapers;
@property (readonly) NSArray *supportedPresets;
@property (readonly) NSArray *supportedQualities;
@property (readonly) NSArray *supportedTrays;
@property (readonly) BOOL supportsColor;
@property (readonly) BOOL supportsDuplex;


+(id)printerWithURL:(id)arg0 ;
-(BOOL)supportsJobAccountID;
-(NSInteger)jobAccountIDSupport;
-(id)_initWithPrinter:(id)arg0 ;
-(id)_initWithURL:(id)arg0 ;
-(id)_internalPrinter;
-(id)_printerID;
-(id)init;
-(void)contactPrinter:(id)arg0 ;
-(void)loadPrinterInfoDict;


@end


#endif