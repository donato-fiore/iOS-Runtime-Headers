// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPICKERCOMPOUNDFILTER_H
#define PUPICKERCOMPOUNDFILTER_H

@class NSString, NSArray;
@protocol PUPickerFilter;

#import <Foundation/Foundation.h>


@interface PUPickerCompoundFilter : NSObject <PUPickerFilter>



@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger filterType; // ivar: _filterType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly, copy, nonatomic) NSArray *subfilters; // ivar: _subfilters
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)generatedPossibleAssetTypes;
-(NSUInteger)generatedRequiredAssetTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generatedAssetPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilterType:(NSInteger)arg0 subfilters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif