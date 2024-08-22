// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKNOWNKEYSMAPPINGSTRATEGY2_H
#define NSKNOWNKEYSMAPPINGSTRATEGY2_H



#import "NSKnownKeysMappingStrategy1.h"

@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)_setupForKeys:(*id)arg0 count:(NSUInteger)arg1 table:(*void)arg2 inData:(id)arg3 ;
-(id)init;
-(id)initForKeys:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initForKeys:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif