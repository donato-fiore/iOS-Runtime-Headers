// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUBLOCKBASEDURLMODIFIER_H
#define NUBLOCKBASEDURLMODIFIER_H

@class NSString;
@protocol NUURLModifying;

#import <Foundation/Foundation.h>


@interface NUBlockBasedURLModifier : NSObject <NUURLModifying>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modifierWithBlock:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)modifyURL:(id)arg0 ;


@end


#endif