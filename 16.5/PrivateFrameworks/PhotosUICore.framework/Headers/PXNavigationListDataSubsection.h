// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTDATASUBSECTION_H
#define PXNAVIGATIONLISTDATASUBSECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PXDataSection.h"
#import "PXNavigationListDataSection.h"

@interface PXNavigationListDataSubsection : NSObject {
    NSMutableDictionary *_listItemsCache;
}


@property (readonly, nonatomic) PXDataSection *dataSection; // ivar: _dataSection
@property (readonly, nonatomic) NSInteger expandedIndex; // ivar: _expandedIndex
@property (readonly, nonatomic) NSInteger externalStartIndex; // ivar: _externalStartIndex
@property (readonly, nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (readonly, nonatomic) NSInteger indexDelta; // ivar: _indexDelta
@property (readonly, nonatomic) PXNavigationListDataSection *listDataSection; // ivar: _listDataSection
@property (readonly, nonatomic) BOOL skipAssetCountFetches; // ivar: _skipAssetCountFetches


-(id)description;
-(id)initWithDataSection:(id)arg0 indexDelta:(NSInteger)arg1 expandedIndex:(NSInteger)arg2 indentationLevel:(NSInteger)arg3 externalStartIndex:(NSInteger)arg4 skipAssetCountFetches:(BOOL)arg5 ;
-(id)listItemAtExternalIndex:(NSInteger)arg0 ;


@end


#endif