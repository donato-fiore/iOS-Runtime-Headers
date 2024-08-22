// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFTEMPNESTEDSNAPSHOT_H
#define _PFTEMPNESTEDSNAPSHOT_H


#import <Foundation/Foundation.h>

#import "NSKnownKeysDictionary.h"

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    NSUInteger _version;
}




-(*id)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)initWithOwnedKKsD:(id)arg0 andVersion:(NSUInteger)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(unsigned int)_versionNumber;
-(void)dealloc;


@end


#endif