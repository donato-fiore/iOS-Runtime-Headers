// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDSEARCHABLEITEM_H
#define MDSEARCHABLEITEM_H

@class NSDictionary, NSURL, NSString, NSData;


#import "CSSearchableItem.h"

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary *attributes;
@property (copy) NSURL *contentURL;
@property (copy) NSString *contentUTI;
@property (copy) NSString *displayName;
@property (readonly, copy) NSString *localizedDisplayName;
@property (copy) NSString *secondaryDisplayName;
@property (copy) NSData *thumbnailImageData;
@property (copy) NSURL *thumbnailURL;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 domainIdentifier:(id)arg1 attributes:(id)arg2 ;
-(void)_standardizeDeprecatedProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif