// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCIMAGEATTRIBUTERULES_H
#define VCIMAGEATTRIBUTERULES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCImageAttributeRules : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageAttributeRules; // ivar: _imageAttributeRules


-(id)description;
-(id)extractDimensionsForInterface:(int)arg0 direction:(int)arg1 ;
-(id)init;
-(void)addRuleForVideoPayload:(int)arg0 withDirection:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 priority:(int)arg5 interface:(int)arg6 ;
-(void)dealloc;
-(void)interfaceKey:(*id)arg0 forInterface:(int)arg1 directionKey:(*id)arg2 forDirection:(int)arg3 ;
-(void)swapSendAndReceiveRules;


@end


#endif