// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFCONSTANTSTRING_H
#define __NSCFCONSTANTSTRING_H

@class NSCFString, NSString;
@protocol NSRedactedDescription;



@interface __NSCFConstantString : NSCFString <NSRedactedDescription>



@property (readonly, copy) NSString *redactedDescription;


-(BOOL)isNSCFConstantString__;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)release;


@end


#endif