// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSZEROINGWEAKREFERENCE_H
#define BSZEROINGWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface BSZeroingWeakReference : NSObject {
    id *_object;
    Class _objectClass;
    NSUInteger _objectAddress;
}


@property (readonly, weak, nonatomic) id *object;


+(id)referenceWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithObject:(id)arg0 ;


@end


#endif