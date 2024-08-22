// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOCUMENTPREFETCHEDDATAPOSTPLAY_H
#define VUIDOCUMENTPREFETCHEDDATAPOSTPLAY_H

@class NSArray, NSString;


#import "VUIDocumentPreFetchedData.h"

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData

@property (nonatomic) BOOL canAutoPlay; // ivar: _canAutoPlay
@property (copy, nonatomic) NSArray *excludedCanonicals; // ivar: _excludedCanonicals
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *productID; // ivar: _productID
@property (copy, nonatomic) NSString *showID; // ivar: _showID
@property (nonatomic) BOOL updateEvent; // ivar: _updateEvent


-(id)jsonData;


@end


#endif