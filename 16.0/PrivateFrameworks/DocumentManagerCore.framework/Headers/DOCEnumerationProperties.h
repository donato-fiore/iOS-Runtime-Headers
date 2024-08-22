// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCENUMERATIONPROPERTIES_H
#define DOCENUMERATIONPROPERTIES_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface DOCEnumerationProperties : NSObject

@property (copy) NSArray *allowedContentTypes; // ivar: _allowedContentTypes
@property (copy) NSArray *excludedContentTypes; // ivar: _excludedContentTypes
@property (copy) NSString *hostIdentifier; // ivar: _hostIdentifier
@property (copy) NSNumber *maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (copy) NSArray *tagIdentifiers; // ivar: _tagIdentifiers


-(id)initWithConfiguration:(id)arg0 tags:(id)arg1 ;
-(id)initWithHostIdentifier:(id)arg0 maximumNumberOfItems:(NSInteger)arg1 allowedContentTypes:(id)arg2 excludedContentTypes:(id)arg3 tags:(id)arg4 ;


@end


#endif