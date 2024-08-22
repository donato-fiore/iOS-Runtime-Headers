// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSERVICEDOMAIN_H
#define CXSERVICEDOMAIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CXServiceDomain : NSObject

@property (readonly, copy, nonatomic) NSString *machName; // ivar: _machName
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)callKitServiceDomain;
-(id)initWithName:(id)arg0 machName:(id)arg1 ;


@end


#endif