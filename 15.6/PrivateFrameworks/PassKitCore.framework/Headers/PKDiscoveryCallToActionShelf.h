// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYCALLTOACTIONSHELF_H
#define PKDISCOVERYCALLTOACTIONSHELF_H



#import "PKDiscoveryShelf.h"
#import "PKDiscoveryCallToAction.h"

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf

@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // ivar: _callToAction
@property (readonly, nonatomic) BOOL useImageAsTitle; // ivar: _useImageAsTitle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;
-(void)setItem:(id)arg0 ;


@end


#endif