// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCOMPONENTAUTH_H
#define CRCOMPONENTAUTH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRComponentAuth : NSObject

@property (copy, nonatomic) NSString *componentName; // ivar: componentName


-(BOOL)isFirstAuthCompleteForQuery:(id)arg0 ;
-(NSInteger)convertIORegDataToStatus:(id)arg0 authPass:(id)arg1 ;
-(NSInteger)copyComponentStatusForQuery:(id)arg0 ;
-(NSInteger)synchronouslycopyAuthStatusForQuery:(id)arg0 ;
-(id)initWithComponentName:(id)arg0 ;


@end


#endif