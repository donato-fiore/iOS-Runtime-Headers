// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSKEYBOARDCOMMAND_H
#define AXSSKEYBOARDCOMMAND_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *standardCommandIdentifier; // ivar: _standardCommandIdentifier
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)commandWithStandardCommandIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommand:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(id)arg0 standardCommandIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStandardCommandIdentifier:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif