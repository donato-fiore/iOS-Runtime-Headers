// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLPURCHASEDAAPITEM_H
#define BLPURCHASEDAAPITEM_H

@class NSDictionary, NSDate, NSNumber, NSMutableDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLPurchaseDAAPItem : NSObject <NSCopying, NSSecureCoding>

 {
    ? _itemFlags;
    BOOL _isFrozen;
}


@property (readonly, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) unsigned int containerItemID; // ivar: _containerItemID
@property (nonatomic) unsigned char downloadStatus; // ivar: _downloadStatus
@property (readonly, nonatomic) NSDate *expectedDate;
@property (retain, nonatomic) NSDictionary *frozenInfo; // ivar: _frozenInfo
@property (retain, nonatomic) NSNumber *hasVideo;
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (readonly, nonatomic) int mediaKind;
@property (retain, nonatomic) NSMutableDictionary *mutableInfo; // ivar: _mutableInfo
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *songalbum; // ivar: _songalbum
@property (retain, nonatomic) NSString *songalbumartist; // ivar: _songalbumartist
@property (nonatomic) NSUInteger songalbumid; // ivar: _songalbumid
@property (retain, nonatomic) NSString *songartist; // ivar: _songartist


+(BOOL)supportsSecureCoding;
+(id)item;
+(id)itemWithItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)thaw;
-(void)updateItemWithDictionary:(id)arg0 ;
-(void)updateItemWithItem:(id)arg0 ;


@end


#endif