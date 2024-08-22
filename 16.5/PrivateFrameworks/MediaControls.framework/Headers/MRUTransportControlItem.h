// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUTRANSPORTCONTROLITEM_H
#define MRUTRANSPORTCONTROLITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MRUAsset.h"

@interface MRUTransportControlItem : NSObject

@property (readonly, nonatomic) MRUAsset *asset; // ivar: _asset
@property (readonly, nonatomic) id *holdBeganAction; // ivar: _holdBeganAction
@property (readonly, nonatomic) id *holdEndAction; // ivar: _holdEndAction
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) id *mainAction; // ivar: _mainAction
@property (readonly, nonatomic) BOOL supportsHolding;


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 asset:(id)arg1 mainAction:(id)arg2 ;
// -(id)initWithIdentifier:(id)arg0 asset:(id)arg1 mainAction:(id)arg2 holdBeganAction:(unk)arg3 holdEndAction:(id)arg4  ;


@end


#endif