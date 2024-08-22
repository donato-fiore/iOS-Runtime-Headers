// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCORESPOTLIGHTBUTTONITEM_H
#define SFCORESPOTLIGHTBUTTONITEM_H

@class NSArray, NSString, NSDictionary, NSData;
@protocol SFCoreSpotlightButtonItem, NSSecureCoding, NSCopying;


#import "SFButtonItem.h"

@interface SFCoreSpotlightButtonItem : SFButtonItem <SFCoreSpotlightButtonItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *actionItemTypes; // ivar: _actionItemTypes
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif