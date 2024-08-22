// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTENTFILTERSTATE_H
#define PXCONTENTFILTERSTATE_H

@class NSArray, NSString;
@protocol NSCopying, PXFilterState;

#import <Foundation/Foundation.h>


@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>



@property (nonatomic) NSInteger assetSource; // ivar: _assetSource
@property (nonatomic) BOOL edited; // ivar: _edited
@property (nonatomic) BOOL favorite; // ivar: _favorite
@property (readonly, nonatomic) BOOL hasRules;
@property (nonatomic) BOOL image; // ivar: _image
@property (readonly, nonatomic) BOOL isFiltering;
@property (copy, nonatomic) NSArray *keywords; // ivar: _keywords
@property (nonatomic) NSInteger libraryType; // ivar: _libraryType
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedDescriptionForFilters;
@property (readonly, nonatomic) NSString *localizedFooterDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescriptionForFilters;
@property (readonly, nonatomic) NSInteger ruleCount;
@property (copy, nonatomic) NSArray *uuids; // ivar: _uuids
@property (nonatomic) BOOL video; // ivar: _video


-(BOOL)isContentFilterActive:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLibraryType:(NSInteger)arg0 ;
-(id)predicateForUseCase:(NSUInteger)arg0 ;


@end


#endif