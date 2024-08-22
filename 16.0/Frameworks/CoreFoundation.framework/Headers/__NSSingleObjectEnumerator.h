// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSSINGLEOBJECTENUMERATOR_H
#define __NSSINGLEOBJECTENUMERATOR_H



#import "NSEnumerator.h"

@interface __NSSingleObjectEnumerator : NSEnumerator {
    id *_theCollection;
    id *_theObjectToReturn;
}




-(id)description;
-(id)init;
-(id)initWithObject:(id)arg0 collection:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif