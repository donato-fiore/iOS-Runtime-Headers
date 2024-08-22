// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOALTITUDEMANIFESTVERSIONPARSER_H
#define GEOALTITUDEMANIFESTVERSIONPARSER_H

@class NSURL, NSError, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "GEOFlyoverRegionVersions.h"

@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate>

 {
    GEOOnce_s _parsed;
    NSURL *_fileURL;
    GEOFlyoverRegionVersions *_versions;
    NSError *_parseError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFileURL:(id)arg0 ;
-(id)parse:(*id)arg0 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;


@end


#endif