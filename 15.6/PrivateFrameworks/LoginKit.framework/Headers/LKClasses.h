// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKCLASSES_H
#define LKCLASSES_H

@class NSArray, NSString;
@protocol LKClassProviding;

#import <Foundation/Foundation.h>


@interface LKClasses : NSObject <LKClassProviding>



@property (readonly, copy, nonatomic) NSArray *classes; // ivar: _classes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLKClasses:(id)arg0 ;
-(id)initWithClassArray:(id)arg0 ;


@end


#endif