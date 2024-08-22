// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMUTABLEGALLERYCOLLECTION_H
#define WFMUTABLEGALLERYCOLLECTION_H

@class CKRecordID, NSString, NSDate, NSArray;


#import "WFGalleryCollection.h"

@interface WFMutableGalleryCollection : WFGalleryCollection

@property (retain, nonatomic) CKRecordID *base; // ivar: base
@property (copy, nonatomic) NSString *collectionDescription; // ivar: collectionDescription
@property (copy, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSString *language; // ivar: language
@property (nonatomic) NSInteger minVersion; // ivar: minVersion
@property (retain, nonatomic) NSDate *modifiedAt; // ivar: modifiedAt
@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (copy, nonatomic) NSArray *supportedIdioms; // ivar: supportedIdioms
@property (copy, nonatomic) NSArray *workflows; // ivar: workflows




@end


#endif