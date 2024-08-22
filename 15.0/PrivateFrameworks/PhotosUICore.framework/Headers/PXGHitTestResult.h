// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGHITTESTRESULT_H
#define PXGHITTESTRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"
#import "PXGSpriteReference.h"

@interface PXGHitTestResult : NSObject {
    id *_userDataProvider;
    id *_userData;
    NSString *_identifier;
}


@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isDecorated; // ivar: _isDecorated
@property (readonly, nonatomic) PXGLayout *layout; // ivar: _layout
@property (readonly, nonatomic) PXGSpriteReference *spriteReference; // ivar: _spriteReference
@property (readonly, nonatomic) id *userData;


-(id)description;
-(id)init;
-(id)initWithSpriteReference:(id)arg0 layout:(id)arg1 identifier:(id)arg2 userData:(id)arg3 ;
-(id)initWithSpriteReference:(id)arg0 layout:(id)arg1 identifier:(id)arg2 userDataProvider:(id)arg3 ;


@end


#endif