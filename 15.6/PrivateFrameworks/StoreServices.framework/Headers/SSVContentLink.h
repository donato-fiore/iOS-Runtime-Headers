// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVCONTENTLINK_H
#define SSVCONTENTLINK_H

@class NSURL, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface SSVContentLink : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (nonatomic) NSInteger contentKind; // ivar: _contentKind
@property (copy, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *itemTitle; // ivar: _itemTitle
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (nonatomic) NSInteger targetApplication; // ivar: _targetApplication


-(NSInteger)_targetApplicationWithContentKind:(NSInteger)arg0 ;
-(id)_URLSchemeWithApplication:(NSInteger)arg0 ;
-(id)_stringForContentKind:(NSInteger)arg0 ;


@end


#endif