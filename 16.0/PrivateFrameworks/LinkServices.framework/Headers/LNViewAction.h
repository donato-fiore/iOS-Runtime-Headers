// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNVIEWACTION_H
#define LNVIEWACTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNViewAction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) LNViewLocation location; // ivar: _location
@property (readonly, nonatomic) NSInteger viewIdentifier; // ivar: _viewIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionIdentifier:(id)arg0 viewIdentifier:(NSInteger)arg1 location:(struct LNViewLocation )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif