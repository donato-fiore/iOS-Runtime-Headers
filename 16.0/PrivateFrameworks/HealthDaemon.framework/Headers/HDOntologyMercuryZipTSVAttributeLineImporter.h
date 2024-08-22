// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYMERCURYZIPTSVATTRIBUTELINEIMPORTER_H
#define HDONTOLOGYMERCURYZIPTSVATTRIBUTELINEIMPORTER_H

@class NSString;
@protocol HDOntologyMercuryZipTSVLineImporter;

#import <Foundation/Foundation.h>


@interface HDOntologyMercuryZipTSVAttributeLineImporter : NSObject <HDOntologyMercuryZipTSVLineImporter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)importLineWithScanner:(id)arg0 slot:(NSInteger)arg1 graphDatabase:(id)arg2 context:(struct ? *)arg3 error:(*id)arg4 ;
+(BOOL)isHeaderLine:(id)arg0 ;


@end


#endif