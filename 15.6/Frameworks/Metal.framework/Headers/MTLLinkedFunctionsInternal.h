// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLLINKEDFUNCTIONSINTERNAL_H
#define MTLLINKEDFUNCTIONSINTERNAL_H



#import "MTLLinkedFunctions.h"

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    MTLLinkedFunctionsPrivate _private;
}




+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)binaryFunctions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)functions;
-(id)groups;
-(id)privateFunctions;
-(void)dealloc;
-(void)setBinaryFunctions:(id)arg0 ;
-(void)setFunctions:(id)arg0 ;
-(void)setGroups:(id)arg0 ;
-(void)setPrivateFunctions:(id)arg0 ;


@end


#endif