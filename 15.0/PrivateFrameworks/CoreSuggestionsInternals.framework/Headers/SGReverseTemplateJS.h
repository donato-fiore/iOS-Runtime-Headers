// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGREVERSETEMPLATEJS_H
#define SGREVERSETEMPLATEJS_H

@class JSVirtualMachine, NSMutableArray, JSContext, _PASNotificationToken, NSURL, NSString, NSISO8601DateFormatter;
@protocol SGReverseTemplateJS, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SGReverseTemplatesJSDataDetectors.h"

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS>

 {
    JSVirtualMachine *_jsVM;
    NSMutableArray *_memoryMappedFiles;
    NSMutableArray *_memoryMappedFileNames;
    JSContext *_jsContext;
    SGReverseTemplatesJSDataDetectors *_dd;
    _PASNotificationToken *_assetUpdateToken;
    NSURL *_assetPath;
    NSString *_localeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_memoryPressureQueue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSISO8601DateFormatter *_dateFormatter;
}




+(id)fakeFlightInformationWithAirlineCode:(id)arg0 flightNumber:(id)arg1 flightDate:(id)arg2 ;
-(BOOL)shouldDownloadFull:(id)arg0 ;
-(id)_diffSchemas:(id)arg0 withExpectedSchemas:(id)arg1 ;
-(id)_eventClassificationForEntity:(id)arg0 ;
-(id)_mergeSchemas:(id)arg0 withExpectedSchemas:(id)arg1 ;
-(id)_prepareArguments:(id)arg0 ;
-(id)_prepareEntity:(id)arg0 ;
-(id)_privacyAwareLogsForMLExtractions:(id)arg0 ;
-(id)_resolveCandidatesForJSDict:(id)arg0 ;
-(id)_stringFromMemoryPressureStatus:(NSUInteger)arg0 ;
-(id)dictionaryFromTimezone:(id)arg0 ;
-(id)flightInformationWithAirlineCode:(id)arg0 flightNumber:(id)arg1 flightDate:(id)arg2 ;
-(id)formattedDate:(id)arg0 withTimezone:(id)arg1 ;
-(id)getJSContext;
-(id)init;
-(id)loadJSFromASCIIFile:(id)arg0 ;
-(id)loadTrieWithFileName:(id)arg0 ;
-(id)mappedArrayBufferForFileName:(id)arg0 ;
-(id)md5Hash:(id)arg0 ;
-(id)outputExceptionsFromOutput:(id)arg0 ;
-(id)payloadToOutputWithEntryPoint:(id)arg0 arguments:(id)arg1 ;
-(id)processLoadRequestWithFileName:(id)arg0 ;
-(id)reverseMapEntity:(id)arg0 forCategory:(id)arg1 withSchemaExpectation:(id)arg2 ;
-(id)sfAirportToDictionnary:(id)arg0 ;
-(id)sfFlightStatusToString:(int)arg0 ;
-(id)sfFlightsToDictionnary:(id)arg0 ;
-(void)_handleMemoryPressureStatus:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)diffSchemas:(id)arg0 withExpectedSchemas:(id)arg1 reply:(id)arg2 ;
-(void)emailToJsonLd:(id)arg0 reply:(id)arg1 ;
-(void)emailToOutput:(id)arg0 reply:(id)arg1 ;
-(void)eventClassificationForEntity:(id)arg0 reply:(id)arg1 ;
-(void)freeJSContext;
-(void)holdXpcTransactionForShortDelay;
-(void)initCurrentAsset;
-(void)mergeSchemas:(id)arg0 withExpectedSchemas:(id)arg1 reply:(id)arg2 ;
-(void)parseHTML:(id)arg0 reply:(id)arg1 ;
-(void)payloadToOutputWithEntryPoint:(id)arg0 arguments:(id)arg1 reply:(id)arg2 ;
-(void)privacyAwareLogsForMLExtractions:(id)arg0 reply:(id)arg1 ;
-(void)refreshAssetPath;
-(void)resolveCandidatesForJSDict:(id)arg0 reply:(id)arg1 ;
-(void)schemaOrgToOutput:(id)arg0 reply:(id)arg1 ;
-(void)setAssetPath:(id)arg0 ;
-(void)shouldDownloadFull:(id)arg0 reply:(id)arg1 ;
-(void)textMessageToOutput:(id)arg0 reply:(id)arg1 ;


@end


#endif