// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCATEGORYSEARCHRESULTSECTION_H
#define GEOCATEGORYSEARCHRESULTSECTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOStyleAttributes.h"

@interface GEOCategorySearchResultSection : NSObject

@property (nonatomic) NSInteger cellType; // ivar: _cellType
@property (copy, nonatomic) NSString *headerDisplayName; // ivar: _headerDisplayName
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (copy, nonatomic) NSString *subHeaderDisplayName; // ivar: _subHeaderDisplayName


-(id)init;
-(id)initWithCategorySearchResultSection:(id)arg0 ;


@end


#endif