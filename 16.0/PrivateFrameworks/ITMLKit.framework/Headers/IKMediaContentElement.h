// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKMEDIACONTENTELEMENT_H
#define IKMEDIACONTENTELEMENT_H



#import "IKViewElement.h"
#import "IKAppPlayerBridge.h"

@interface IKMediaContentElement : IKViewElement

@property (readonly, nonatomic) IKAppPlayerBridge *playerBridge; // ivar: _playerBridge


+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif