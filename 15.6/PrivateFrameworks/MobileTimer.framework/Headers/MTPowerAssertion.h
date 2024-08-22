// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPOWERASSERTION_H
#define MTPOWERASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTPowerAssertion : NSObject

@property (nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (readonly, nonatomic) CGFloat assertionTimeout; // ivar: _assertionTimeout
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 assertionTimeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)releaseAssertion;
-(void)takeAssertion;


@end


#endif