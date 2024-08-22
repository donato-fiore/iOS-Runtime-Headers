// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTILEACCESSORYBUTTON_H
#define PKPASSTILEACCESSORYBUTTON_H

@class NSString;


#import "PKPassTileAccessory.h"

@interface PKPassTileAccessoryButton : PKPassTileAccessory

@property (nonatomic, getter=isSpinnerEnabled) BOOL spinnerEnabled; // ivar: _spinnerEnabled
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)createWithTitle:(id)arg0 spinnerEnabled:(BOOL)arg1 ;
-(BOOL)_isEqual:(id)arg0 ;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(NSUInteger)hash;
-(id)createResolvedAccessoryWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif