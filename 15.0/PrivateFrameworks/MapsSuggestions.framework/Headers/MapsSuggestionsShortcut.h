// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSSHORTCUT_H
#define MAPSSUGGESTIONSSHORTCUT_H

@class NSArray, NSString, GEOMapItemStorage, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsShortcut : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (copy, nonatomic) NSString *customName; // ivar: _customName
@property (nonatomic) BOOL derivedFromMeCard; // ivar: _derivedFromMeCard
@property (copy, nonatomic) GEOMapItemStorage *geoMapItem; // ivar: _geoMapItem
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBackedPlaceholder;
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly, nonatomic) BOOL isSetupPlaceholder;
@property (copy, nonatomic) NSString *originatingAddressString; // ivar: _originatingAddressString
@property (nonatomic, getter=source, setter=setSource:) NSInteger source;
@property (copy, nonatomic) NSUUID *storageIdentifier; // ivar: _storageIdentifier
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)shortcutWithData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFavoriteItem:(id)arg0 ;
-(BOOL)isEqualToShortcut:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)initBackedPlaceholderWithType:(NSInteger)arg0 identifier:(id)arg1 customName:(id)arg2 ;
-(id)initBackedPlaceholderWithType:(NSInteger)arg0 identifier:(id)arg1 originatingAddress:(id)arg2 customName:(id)arg3 ;
-(id)initSetupPlaceholderOfType:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFavoriteItem:(id)arg0 ;
-(id)initWithGEOMapItem:(id)arg0 customName:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 geoMapItem:(id)arg1 customName:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 geoMapItem:(id)arg2 customName:(id)arg3 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 geoMapItem:(id)arg2 customName:(id)arg3 contacts:(id)arg4 isHidden:(BOOL)arg5 originatingAddress:(id)arg6 ;
-(void)addContact:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContact:(id)arg0 ;


@end


#endif