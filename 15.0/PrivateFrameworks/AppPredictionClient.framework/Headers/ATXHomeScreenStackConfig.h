// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENSTACKCONFIG_H
#define ATXHOMESCREENSTACKCONFIG_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenPage.h"

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsNewWidget; // ivar: _allowsNewWidget
@property (nonatomic) BOOL allowsSmartRotate; // ivar: _allowsSmartRotate
@property (nonatomic) NSInteger coordinateColumn; // ivar: _coordinateColumn
@property (nonatomic) NSInteger coordinateRow; // ivar: _coordinateRow
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) ATXHomeScreenPage *page; // ivar: _page
@property (nonatomic) NSUInteger stackLayoutSize; // ivar: _stackLayoutSize
@property (copy, nonatomic) NSArray *widgets; // ivar: _widgets


+(BOOL)supportsSecureCoding;
-(BOOL)isAppPredictionPanel;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPinnedSuggestionsWidget;
-(BOOL)isPinnedWidget;
-(NSUInteger)hash;
-(id)compactDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif