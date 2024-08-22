// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKDSEPROTOTYPEBUNDLE_H
#define _IKDSEPROTOTYPEBUNDLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _IKDSEPrototypeBundle : NSObject {
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    ? _flags;
}




-(id)allPrototypes;
-(id)init;
-(id)prototypeForItemAtIndex:(NSUInteger)arg0 ;
-(void)addPrototype:(id)arg0 forIndexes:(id)arg1 ;


@end


#endif