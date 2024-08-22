// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDEMOMODEFACERECOGNITIONDATASOURCE_H
#define HFDEMOMODEFACERECOGNITIONDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HFDemoModeFaceRecognitionDataSource : NSObject

@property (retain, nonatomic) NSArray *knownToHouseholdEntries; // ivar: _knownToHouseholdEntries
@property (retain, nonatomic) NSArray *recentsEntries; // ivar: _recentsEntries


-(id)arrayFromPlistArray:(id)arg0 ;
-(id)init;


@end


#endif