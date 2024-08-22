// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYSEARCHSCOPE_H
#define MPMODELLIBRARYSEARCHSCOPE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPModelKind.h"
#import "MPPropertySet.h"

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding>

 {
    ? _coreScope;
}


@property (readonly, nonatomic) shared_ptr<mlcore::LocalizedSearchScope> coreScope;
@property (retain, nonatomic) MPModelKind *itemKind; // ivar: _itemKind
@property (readonly, copy, nonatomic) MPPropertySet *itemProperties; // ivar: _itemProperties
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemKind:(id)arg0 name:(id)arg1 properties:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif