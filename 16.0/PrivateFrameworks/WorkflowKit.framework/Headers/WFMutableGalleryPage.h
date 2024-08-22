// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMUTABLEGALLERYPAGE_H
#define WFMUTABLEGALLERYPAGE_H

@class NSArray, CKRecordID, NSNumber, NSString;


#import "WFGalleryPage.h"

@interface WFMutableGalleryPage : WFGalleryPage

@property (copy, nonatomic) NSArray *banners; // ivar: banners
@property (retain, nonatomic) CKRecordID *base; // ivar: base
@property (copy, nonatomic) NSArray *collections; // ivar: collections
@property (copy, nonatomic) NSArray *donations; // ivar: donations
@property (copy, nonatomic) NSArray *donationsGroupedByApp; // ivar: donationsGroupedByApp
@property (copy, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSNumber *isRoot; // ivar: isRoot
@property (copy, nonatomic) NSString *language; // ivar: language
@property (copy, nonatomic) NSNumber *minVersion; // ivar: minVersion
@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (copy, nonatomic) NSArray *routines; // ivar: routines




@end


#endif