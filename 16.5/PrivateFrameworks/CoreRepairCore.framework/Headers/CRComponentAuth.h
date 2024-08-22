// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCOMPONENTAUTH_H
#define CRCOMPONENTAUTH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRComponentAuth : NSObject

@property (copy, nonatomic) NSString *componentName; // ivar: componentName


-(BOOL)isFirstAuthComplete;
-(NSInteger)convertIORegDataToStatus:(id)arg0 authPass:(id)arg1 ;
-(NSInteger)copyComponentStatus;
-(NSInteger)synchronouslycopyAuthStatus;
-(id)init;
-(id)initWithComponentName:(id)arg0 ;


@end


#endif