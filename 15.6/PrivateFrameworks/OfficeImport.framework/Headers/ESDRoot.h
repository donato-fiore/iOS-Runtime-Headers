// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESDROOT_H
#define ESDROOT_H

@class NSMutableArray;


#import "ESDObject.h"

@interface ESDRoot : ESDObject {
    NSMutableArray *mChildren;
}




-(*void)eshRoot;
-(NSUInteger)childCount;
-(id)childAt:(NSUInteger)arg0 ;
-(id)init;
-(id)initFromReader:(struct OcReader *)arg0 ;
-(id)initWithEshObject:(struct EshObject *)arg0 ;
-(id)initWithPbState:(id)arg0 ;
-(id)pbReferenceWithID:(unsigned int)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)writeToWriter:(struct OcWriter *)arg0 ;


@end


#endif