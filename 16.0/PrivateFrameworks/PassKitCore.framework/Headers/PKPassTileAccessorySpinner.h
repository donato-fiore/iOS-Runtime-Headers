// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTILEACCESSORYSPINNER_H
#define PKPASSTILEACCESSORYSPINNER_H



#import "PKPassTileAccessory.h"

@interface PKPassTileAccessorySpinner : PKPassTileAccessory

@property (nonatomic, getter=isSpinnerEnabled) BOOL spinnerEnabled; // ivar: _spinnerEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqual:(id)arg0 ;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(NSUInteger)hash;
-(id)createResolvedAccessoryWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif