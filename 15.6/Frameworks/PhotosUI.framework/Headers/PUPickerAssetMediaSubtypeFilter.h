// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPICKERASSETMEDIASUBTYPEFILTER_H
#define PUPICKERASSETMEDIASUBTYPEFILTER_H

@class NSString;
@protocol PUPickerFilter;

#import <Foundation/Foundation.h>


@interface PUPickerAssetMediaSubtypeFilter : NSObject <PUPickerFilter>



@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, nonatomic) BOOL allowsSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger filterType; // ivar: _filterType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)generatedPossibleAssetTypes;
-(NSUInteger)generatedRequiredAssetTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generatedAssetPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilterType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif