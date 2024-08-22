// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSOPENSEARCHDESCRIPTION_H
#define WBSOPENSEARCHDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WBSOpenSearchURLTemplate.h"

@interface WBSOpenSearchDescription : NSObject

@property (readonly, nonatomic) NSString *descriptionDocumentURLString; // ivar: _descriptionDocumentURLString
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate; // ivar: _searchURLTemplate
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON; // ivar: _urlTemplateForSuggestionsInJSON
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML; // ivar: _urlTemplateForSuggestionsInXML


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDescriptionDocumentURLString:(id)arg0 searchURLTemplate:(id)arg1 urlTemplateForSuggestionsInJSON:(id)arg2 urlTemplateForSuggestionsInXML:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif