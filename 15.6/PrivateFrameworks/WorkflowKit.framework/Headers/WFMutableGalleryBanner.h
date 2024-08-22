// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMUTABLEGALLERYBANNER_H
#define WFMUTABLEGALLERYBANNER_H

@class CKRecordID, NSString, NSArray;


#import "WFGalleryBanner.h"

@interface WFMutableGalleryBanner : WFGalleryBanner

@property (retain, nonatomic) CKRecordID *base; // ivar: base
@property (retain, nonatomic) CKRecordID *detailPage; // ivar: detailPage
@property (copy, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSString *language; // ivar: language
@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (copy, nonatomic) NSArray *supportedIdioms; // ivar: supportedIdioms




@end


#endif