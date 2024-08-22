// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIARCHIVEEXTRACTIONCONTROLLER_H
#define _UIARCHIVEEXTRACTIONCONTROLLER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _UIArchiveExtractionController : NSObject {
    NSArray *_extractedContentAbsolutePaths;
}


@property (retain, nonatomic) NSString *destinationContentProtectionType; // ivar: _destinationContentProtectionType
@property (retain, nonatomic) NSString *destinationExtractionRootPath; // ivar: _destinationExtractionRootPath
@property (retain, nonatomic) NSString *sourceArchiveExtractionRootPath; // ivar: _sourceArchiveExtractionRootPath
@property (readonly, nonatomic) NSString *sourceArchivePath; // ivar: _sourceArchivePath


-(BOOL)_createDestinationRoot:(*id)arg0 ;
-(BOOL)extractArchiveContent:(*id)arg0 ;
-(id)extractedContentAbsolutePathsMatchingPredicate:(id)arg0 ;
-(id)initWithSourceArchivePath:(id)arg0 destinationExtractionRootPath:(id)arg1 ;


@end


#endif