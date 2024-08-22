// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSTILE_H
#define PKPASSTILE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassTileMetadata.h"
#import "PKPassTileState.h"

@interface PKPassTile : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress; // ivar: _inProgress
@property (readonly, nonatomic) PKPassTileMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) PKPassTileState *state; // ivar: _state
@property (readonly, nonatomic) NSString *stateIdentifier; // ivar: _stateIdentifier


+(BOOL)supportsSecureCoding;
+(id)createTileRowsForTiles:(id)arg0 ;
-(BOOL)supportsPaymentPassAction:(id)arg0 ;
-(id)_init;
-(id)_initWithMetadata:(id)arg0 stateIdentifier:(id)arg1 state:(id)arg2 inProgress:(BOOL)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif