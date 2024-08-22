// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOLUMNSTACK_H
#define SXCOLUMNSTACK_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXColumnStack : NSObject

@property (readonly, nonatomic) NSArray *columnStack; // ivar: _columnStack


-(NSUInteger)rangeInBounds:(struct _NSRange )arg0 ;
-(id)allComponentsAfterComponent:(id)arg0 ;
-(id)allComponentsBeforeComponent:(id)arg0 ;
-(id)componentsAfterComponent:(id)arg0 ;
-(id)componentsBeforeComponent:(id)arg0 ;
-(id)description;
-(id)initWithNumberOfColumns:(NSUInteger)arg0 ;
-(void)addComponentBlueprint:(id)arg0 ;


@end


#endif