// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCORESPOTLIGHTEXTENSIONPREVIEW_H
#define QLCORESPOTLIGHTEXTENSIONPREVIEW_H

@class NSString, NSURL;


#import "QLExtensionPreview.h"

@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview

@property (copy) NSString *query; // ivar: _query
@property (copy) NSString *searchableItemTitle; // ivar: _searchableItemTitle
@property (copy) NSURL *searchableItemURL; // ivar: _searchableItemURL
@property (copy) NSString *searchableItemUniqueIdentifier; // ivar: _searchableItemUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 searchableItemURL:(id)arg1 searchableItemTitle:(id)arg2 searchableItemUUID:(id)arg3 description:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif