// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCVIEWINAPPSTOREOFFERMETADATA_H
#define ASCVIEWINAPPSTOREOFFERMETADATA_H

@class NSString;


#import "ASCOfferMetadata.h"

@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isViewInAppStore;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif