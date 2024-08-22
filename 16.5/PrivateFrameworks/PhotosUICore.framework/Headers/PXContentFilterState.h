// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTFILTERSTATE_H
#define PXCONTENTFILTERSTATE_H

@class NSArray, NSString;
@protocol NSCopying, PXFilterState;

#import <Foundation/Foundation.h>


@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>



@property (nonatomic) BOOL edited; // ivar: _edited
@property (nonatomic) BOOL favorite; // ivar: _favorite
@property (readonly, nonatomic) BOOL hasRules;
@property (nonatomic) BOOL image; // ivar: _image
@property (nonatomic) BOOL includeSharedWithYou; // ivar: _includeSharedWithYou
@property (readonly, nonatomic) BOOL isFiltering;
@property (copy, nonatomic) NSArray *keywords; // ivar: _keywords
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;
@property (readonly, nonatomic) NSInteger ruleCount;
@property (nonatomic) BOOL saved; // ivar: _saved
@property (nonatomic) BOOL showSharedLibraryDuplicates; // ivar: _showSharedLibraryDuplicates
@property (nonatomic) BOOL unsaved; // ivar: _unsaved
@property (copy, nonatomic) NSArray *uuids; // ivar: _uuids
@property (nonatomic) BOOL video; // ivar: _video


+(id)defaultFilterStateForContainerCollection:(id)arg0 ;
+(id)filterState;
-(BOOL)isContentFilterActive:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)predicateForUseCase:(NSUInteger)arg0 ;


@end


#endif