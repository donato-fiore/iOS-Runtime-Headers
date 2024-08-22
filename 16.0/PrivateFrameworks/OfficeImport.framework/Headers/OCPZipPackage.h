// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCPZIPPACKAGE_H
#define OCPZIPPACKAGE_H

@class NSMutableDictionary;


#import "OCPPackage.h"
#import "OISFUZipArchive.h"

@interface OCPZipPackage : OCPPackage {
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}




-(id)initWithArchive:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)partForLocation:(id)arg0 ;
-(void)resetPartForLocation:(id)arg0 ;


@end


#endif