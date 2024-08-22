// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLHIGHLIGHT_H
#define SLHIGHLIGHT_H

@class NSArray, NSString, NSURL, NSNumber, NSDictionary, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SLHighlight : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *attributions; // ivar: _attributions
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isLocalResource; // ivar: _isLocalResource
@property (readonly, nonatomic) BOOL isSyndicatableMedia; // ivar: _isSyndicatableMedia
@property (readonly, copy, nonatomic) NSURL *livePhotoComplementURL; // ivar: _livePhotoComplementURL
@property (readonly, copy, nonatomic) NSURL *resolvedURL; // ivar: _resolvedURL
@property (readonly, copy, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (readonly, copy, nonatomic) NSString *resourceUTI; // ivar: _resourceUTI
@property (readonly, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, copy, nonatomic) NSDictionary *supplementaryData; // ivar: _supplementaryData
@property (readonly, nonatomic) NSUInteger syndicationType; // ivar: _syndicationType
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)Sha256ForData:(id)arg0 withSalt:(id)arg1 ;
+(id)_fetchCSSearchableItemForUniqueIdentifier:(id)arg0 withRequiredAttributes:(id)arg1 error:(*id)arg2 ;
+(id)errorForHighlightDomain:(id)arg0 andCode:(NSInteger)arg1 andUnderlyingError:(*id)arg2 ;
+(id)requiredSpotlightAttributeKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_uniqueIdentifierForResourceURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCSSearchableItem:(id)arg0 ;
-(id)initWithCSSearchableItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPortraitHighlight:(id)arg0 withError:(*id)arg1 ;
-(id)portraitHighlight;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif