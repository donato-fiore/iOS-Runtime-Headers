// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSOBFUSCATABLEDESCRIPTIONITEM_H
#define NMSOBFUSCATABLEDESCRIPTIONITEM_H

@class NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface NMSObfuscatableDescriptionItem : NSObject

@property (nonatomic) BOOL obfuscated; // ivar: _obfuscated
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix
@property (retain, nonatomic) NSObject<NSObject> *value; // ivar: _value


-(id)initWithPrefix:(id)arg0 value:(id)arg1 obfuscated:(BOOL)arg2 ;


@end


#endif