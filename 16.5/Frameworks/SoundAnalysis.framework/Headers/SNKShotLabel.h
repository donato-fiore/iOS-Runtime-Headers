// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNKSHOTLABEL_H
#define SNKSHOTLABEL_H


#import <Foundation/Foundation.h>


@interface SNKShotLabel : NSObject

@property (readonly) NSInteger type; // ivar: _type


+(id)new;
-(id)init;
-(id)initAsNegativeLabel;
-(id)initAsPositiveLabel;


@end


#endif