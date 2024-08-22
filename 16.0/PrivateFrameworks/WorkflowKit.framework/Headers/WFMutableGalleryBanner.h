// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (copy, nonatomic) NSString *subtitle; // ivar: subtitle
@property (copy, nonatomic) NSArray *supportedIdioms; // ivar: supportedIdioms




@end


#endif