// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBJCOBJECTCLASSENTRY_H
#define OBJCOBJECTCLASSENTRY_H

@class NSString, NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface ObjCObjectClassEntry : NSObject {
    NSString *_clsName;
    NSMutableSet *_objects;
}


@property (readonly) NSString *clsName;
@property (readonly) NSSet *objects;


-(id)initWithClass:(Class)arg0 ;
-(void)addObject:(id)arg0 ;


@end


#endif