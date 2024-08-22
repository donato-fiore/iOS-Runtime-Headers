// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBOUNDKEYPATH_H
#define NSBOUNDKEYPATH_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSBoundKeyPath : NSObject {
    id *_rootObject;
    NSString *_keyPath;
}


@property (readonly) NSString *keyPath;
@property id *rootObject;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)keyPathWithRootObject:(id)arg0 path:(char *)arg1 ;
+(id)newKeyPathWithRootObject:(id)arg0 keyPathString:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateValue:(*id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)mutableArrayValue;
-(id)mutableOrderedSetValue;
-(id)mutableSetValue;
-(id)value;
-(void)dealloc;
-(void)setValue:(id)arg0 ;


@end


#endif