// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYSHELF_H
#define PKDISCOVERYSHELF_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKDiscoveryItem.h"

@interface PKDiscoveryShelf : NSObject <NSSecureCoding>

 {
    NSString *_itemIdentifier;
}


@property (weak, nonatomic) PKDiscoveryItem *item; // ivar: _item
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)shelfWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif