// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFOBJECTPROPERTY_H
#define _MFOBJECTPROPERTY_H


#import <Foundation/Foundation.h>


@interface _MFObjectProperty : NSObject

@property (nonatomic) Class class; // ivar: _class
@property (nonatomic) SEL property; // ivar: _property


+(id)objectPropertyWithClass:(Class)arg0 property:(SEL)arg1 ;


@end


#endif