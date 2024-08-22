// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSOBFUSCATABLEDESCRIPTIONITEM_H
#define NMSOBFUSCATABLEDESCRIPTIONITEM_H

@class NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface NMSObfuscatableDescriptionItem : NSObject

@property (retain, nonatomic) NSString *format; // ivar: _format
@property (nonatomic) BOOL obfuscated; // ivar: _obfuscated
@property (retain, nonatomic) NSObject<NSObject> *value; // ivar: _value


-(id)initWithFormat:(id)arg0 value:(id)arg1 obfuscated:(BOOL)arg2 ;


@end


#endif