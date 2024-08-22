// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSSPOTLIGHTACTION_H
#define LSSPOTLIGHTACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSSpotlightAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (readonly, nonatomic) NSString *unlocalizedTitle; // ivar: _unlocalizedTitle


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpotlightAction:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 unlocalizedTitle:(id)arg1 symbolImageName:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif