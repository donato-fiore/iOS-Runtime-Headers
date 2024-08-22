// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDCHANGEDETAILSCOALESCER_H
#define PXSECTIONEDCHANGEDETAILSCOALESCER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXMutableArrayChangeDetails.h"
#import "PXSectionedDataSourceChangeDetails.h"

@interface PXSectionedChangeDetailsCoalescer : NSObject {
    NSInteger _fromDataSourceIdentifier;
    NSInteger _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}


@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;


+(BOOL)_verboseLoggingEnabled;
+(id)changeDetailsByCoalescingChangeDetails:(id)arg0 ;
-(id)init;
-(id)initWithSectionedChangeDetails:(id)arg0 ;
-(void)addChangeDetails:(id)arg0 ;


@end


#endif