// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEDIRECTINVOCATION_H
#define IEDIRECTINVOCATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IEDirectInvocation : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDictionary *userData; // ivar: _userData


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 withUserData:(id)arg1 ;


@end


#endif