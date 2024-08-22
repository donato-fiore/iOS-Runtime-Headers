// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSQUICKWEBSITESEARCHPROVIDER_H
#define WBSQUICKWEBSITESEARCHPROVIDER_H

@class NSString, NSDate;
@protocol WBSQuickWebsiteSearchProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSOpenSearchDescription.h"
#import "WBSOpenSearchURLTemplate.h"

@interface WBSQuickWebsiteSearchProvider : NSObject {
    id<WBSQuickWebsiteSearchProviderDelegate> *_delegate;
    NSString *_displayName;
    NSString *_hostname;
}


@property (readonly, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (copy, nonatomic) NSDate *dateOfLastSearch; // ivar: _dateOfLastSearch
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
@property (copy, nonatomic) NSString *openSearchDescriptionURLString; // ivar: _openSearchDescriptionURLString
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (retain, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm; // ivar: _searchURLTemplateFromForm
@property (readonly, nonatomic) NSString *sourcePageURLString; // ivar: _sourcePageURLString
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;


-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSourcePageURLString:(id)arg0 openSearchDescriptionURLString:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSourcePageURLString:(id)arg0 searchURLTemplateFromForm:(id)arg1 delegate:(id)arg2 ;


@end


#endif