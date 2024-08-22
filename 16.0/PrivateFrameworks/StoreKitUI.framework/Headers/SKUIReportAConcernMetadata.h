// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREPORTACONCERNMETADATA_H
#define SKUIREPORTACONCERNMETADATA_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "SKUIReportAConcernReason.h"

@interface SKUIReportAConcernMetadata : NSObject

@property (copy, nonatomic) NSString *details; // ivar: _details
@property (nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSURL *reportConcernURL; // ivar: _reportConcernURL
@property (retain, nonatomic) SKUIReportAConcernReason *selectedReason; // ivar: _selectedReason




@end


#endif