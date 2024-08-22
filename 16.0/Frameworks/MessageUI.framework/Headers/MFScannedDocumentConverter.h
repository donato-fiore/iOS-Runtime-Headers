// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSCANNEDDOCUMENTCONVERTER_H
#define MFSCANNEDDOCUMENTCONVERTER_H

@class NSString;
@protocol EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFScannedDocumentConverter : NSObject <EFLoggable>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)_pdfConverterFromScannedDocument:(id)arg0 ;
-(id)init;
-(id)pdfDocumentFromScannedDocument:(id)arg0 ;


@end


#endif