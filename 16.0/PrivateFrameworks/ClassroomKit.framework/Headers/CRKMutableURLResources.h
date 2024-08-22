// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKMUTABLEURLRESOURCES_H
#define CRKMUTABLEURLRESOURCES_H

@class NSNumber, NSDate;


#import "CRKURLResources.h"

@interface CRKMutableURLResources : CRKURLResources

@property (retain, nonatomic, getter=isDirectory) NSNumber *directory;
@property (copy, nonatomic) NSNumber *documentIdentifier;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) NSUInteger size;




@end


#endif