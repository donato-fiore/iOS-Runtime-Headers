// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCDADOCUMENTSHAREITEMSOURCE_H
#define HKCDADOCUMENTSHAREITEMSOURCE_H

@class UIActivityItemProvider, HKCDADocumentSample, NSURL, HKHealthStore, NSData;


#import "HKCDAPDFGenerator.h"

@interface HKCDADocumentShareItemSource : UIActivityItemProvider

@property (readonly, nonatomic) HKCDADocumentSample *documentSample; // ivar: _documentSample
@property (readonly, nonatomic) NSURL *exportArchiveURL; // ivar: _exportArchiveURL
@property (readonly, nonatomic) HKCDAPDFGenerator *generator; // ivar: _generator
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSData *shareData; // ivar: _shareData


-(id)_simpleError:(id)arg0 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)initWithDocumentSample:(id)arg0 healthStore:(id)arg1 ;
-(id)item;
-(void)_buildZipArchiveWithCDA:(id)arg0 generatedPDF:(id)arg1 completion:(id)arg2 ;
-(void)_generatePDFforCDA:(id)arg0 completion:(id)arg1 ;
-(void)_loadShareDataWithHealthStore:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;


@end


#endif