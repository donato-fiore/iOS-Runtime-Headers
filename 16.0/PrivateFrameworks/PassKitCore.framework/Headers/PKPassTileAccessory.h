// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTILEACCESSORY_H
#define PKPASSTILEACCESSORY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassTileAccessoryButton.h"
#import "PKPassTileAccessorySpinner.h"

@interface PKPassTileAccessory : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKPassTileAccessoryButton *accessoryTypeButton;
@property (readonly, nonatomic) PKPassTileAccessorySpinner *accessoryTypeSpinner;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_createForDictionary:(id)arg0 ;
+(id)_createForType:(NSInteger)arg0 resolved:(BOOL)arg1 ;
-(BOOL)_isEqual:(id)arg0 ;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUnresolvedAccessory:(id)arg0 ;
-(NSUInteger)hash;
-(id)createResolvedAccessoryWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif