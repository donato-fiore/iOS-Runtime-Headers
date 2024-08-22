// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFRENDERINGEXPORTERDELEGATE_H
#define TSAPDFRENDERINGEXPORTERDELEGATE_H

@class NSString;
@protocol TSARenderingExporterDelegate;

#import <Foundation/Foundation.h>

#import "TSARenderingExporter.h"

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>

 {
    TSARenderingExporter *mRenderingExporter;
    NSString *mPassphraseOpen;
    NSString *mPassphrasePrintCopy;
    BOOL mRequireOpenPassword;
    BOOL mRequireCopyPassword;
    BOOL mRequirePrintPassword;
    int mRenderingQuality;
}


@property int taggingCondition; // ivar: mTaggingCondition


-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(BOOL)validatePassphrases:(*id)arg0 ;
-(CGFloat)viewScale;
-(id)initWithRenderingExporter:(id)arg0 ;
-(int)renderingQuality;
-(struct CGContext *)newCGContextForURL:(id)arg0 ;
-(void)releaseCGContext:(struct CGContext *)arg0 ;
-(void)setCopyPassphrase:(id)arg0 hint:(id)arg1 ;
-(void)setPassphrase:(id)arg0 hint:(id)arg1 ;
-(void)setPrintPassphrase:(id)arg0 hint:(id)arg1 ;
-(void)setRenderingQuality:(int)arg0 ;
-(void)setup;
-(void)teardown;


@end


#endif