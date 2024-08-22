// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKEDITOPTIONCOLLECTION_H
#define NTKEDITOPTIONCOLLECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface NTKEditOptionCollection : NSObject

@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (readonly, nonatomic) NSString *optionsDescription;
@property (copy, nonatomic) NSString *slot; // ivar: _slot
@property (readonly, nonatomic) NSInteger swatchStyle;


+(id)editOptionCollectionWithEditMode:(NSInteger)arg0 localizedName:(id)arg1 options:(id)arg2 collectionType:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)filteredCollectionForDevice:(id)arg0 ;
-(id)filteredCollectionWithObjectsPassingTest:(id)arg0 ;
-(id)initWithEditMode:(NSInteger)arg0 localizedName:(id)arg1 options:(id)arg2 collectionType:(NSUInteger)arg3 ;
-(id)initWithEditMode:(NSInteger)arg0 localizedName:(id)arg1 options:(id)arg2 collectionType:(NSUInteger)arg3 slot:(id)arg4 ;


@end


#endif