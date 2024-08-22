// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTILESTATEDEFAULT_H
#define PKPASSTILESTATEDEFAULT_H

@class NSString;


#import "PKPassTileState.h"
#import "PKPassTileAccessory.h"

@interface PKPassTileStateDefault : PKPassTileState

@property (retain, nonatomic) PKPassTileAccessory *accessory; // ivar: _accessory
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(BOOL)isEqualToUnresolvedState:(id)arg0 ;
-(id)createResolvedStateWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif