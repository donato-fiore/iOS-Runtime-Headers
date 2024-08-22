// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECAPPITEM_H
#define _DECAPPITEM_H

@class DECItem, NSString;



@interface _DECAppItem : DECItem

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSInteger sources; // ivar: _sources


+(BOOL)supportsSecureCoding;
+(NSUInteger)category;
+(id)appWithBundleIdentifier:(id)arg0 ;
+(id)appWithBundleIdentifier:(id)arg0 sources:(NSInteger)arg1 ;
-(BOOL)_isEqualToDECAppItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 sources:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif