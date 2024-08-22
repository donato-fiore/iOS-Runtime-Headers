// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONOBJECTCOMPONENTSUPPORT_H
#define SXJSONOBJECTCOMPONENTSUPPORT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SXJSONObjectComponentSupport : NSObject

@property (readonly, nonatomic) NSString *specVersion; // ivar: _specVersion


+(id)shared;
-(id)initWithSpecVersion:(id)arg0 ;
-(id)objectValueClassBlock:(SEL)arg0 ;
-(id)purgeClassBlock:(SEL)arg0 ;


@end


#endif