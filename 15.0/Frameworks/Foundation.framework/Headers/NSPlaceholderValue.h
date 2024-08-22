// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPLACEHOLDERVALUE_H
#define NSPLACEHOLDERVALUE_H



#import "NSNumber.h"

@interface NSPlaceholderValue : NSNumber {
    *_NSZone zoneForInstance;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(char *)objCType;
-(id)autorelease;
-(id)init;
-(id)initWithBytes:(*void)arg0 objCType:(char *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)release;


@end


#endif