// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCVERSIONSFILEPROVIDER_H
#define BRCVERSIONSFILEPROVIDER_H

@class NSMutableDictionary, NSString;


#import "BRCFileProvider.h"

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary *_operationsByName;
    NSString *_personaIdentifier;
}




-(id)_fileReactorID;
-(id)_physicalURLForURL:(id)arg0 ;
-(id)initWithVolume:(id)arg0 personaIdentifier:(id)arg1 ;
-(void)_cancelProvidingItemAtURL:(id)arg0 toReaderWithID:(id)arg1 ;
-(void)_provideItemAtURL:(id)arg0 toReaderWithID:(id)arg1 completionHandler:(id)arg2 ;
-(void)dumpToContext:(id)arg0 ;


@end


#endif