// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCSSVARIABLE_H
#define LPCSSVARIABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LPCSSVariable : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 ;
-(id)variableByResolvingWithThemePath:(id)arg0 ;


@end


#endif