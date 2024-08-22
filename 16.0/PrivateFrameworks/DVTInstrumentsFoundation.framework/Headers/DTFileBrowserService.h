// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTFILEBROWSERSERVICE_H
#define DTFILEBROWSERSERVICE_H

@class DTXService, NSString;
@protocol DTFileBrowserServiceAuthorizedAPI;



@interface DTFileBrowserService : DTXService <DTFileBrowserServiceAuthorizedAPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)contentsOfDirectoryAtPath:(id)arg0 ;
-(id)dataFromFileAtPath:(id)arg0 ;
-(id)entriesAtPath:(id)arg0 ;
-(id)entriesInPathsArray:(id)arg0 ;
-(id)fileExistsAtPath:(id)arg0 ;
-(id)updateAttributesForItem:(id)arg0 ;


@end


#endif