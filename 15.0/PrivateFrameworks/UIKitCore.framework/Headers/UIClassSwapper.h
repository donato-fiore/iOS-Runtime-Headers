// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICLASSSWAPPER_H
#define UICLASSSWAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIClassSwapper : NSObject {
    NSString *className;
    id *object;
}




+(id)swapperForObject:(id)arg0 withClassName:(id)arg1 ;
-(id)className;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 andClassName:(id)arg1 ;
-(id)object;
-(id)performSelectorForObject:(id)arg0 selector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif