// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYVISIBLECONTENTSNAPSHOT_H
#define PXCURATEDLIBRARYVISIBLECONTENTSNAPSHOT_H

@class NSDateInterval, NSString, NSArray;
@protocol PXBrowserVisibleContentSnapshot;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot>

 {
    id *_dateIntervalFuture;
    id *_locationNamesFuture;
    NSInteger _dataSourceIdentifier;
    BOOL _isFiltering;
}


@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSUInteger dateIntervalGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedPlaceholderText;
@property (readonly, nonatomic) NSArray *locationNames;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLibraryLayout:(id)arg0 dateType:(NSUInteger)arg1 ;


@end


#endif