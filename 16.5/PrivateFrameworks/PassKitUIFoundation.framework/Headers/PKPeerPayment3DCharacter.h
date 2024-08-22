// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENT3DCHARACTER_H
#define PKPEERPAYMENT3DCHARACTER_H

@class NSString, SCNNode;

#import <Foundation/Foundation.h>


@interface PKPeerPayment3DCharacter : NSObject

@property (retain, nonatomic) NSString *character; // ivar: _character
@property (retain, nonatomic) SCNNode *node; // ivar: _node


+(id)characterWithCharacter:(id)arg0 node:(id)arg1 ;


@end


#endif