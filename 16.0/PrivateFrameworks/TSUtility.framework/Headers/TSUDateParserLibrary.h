// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDATEPARSERLIBRARY_H
#define TSUDATEPARSERLIBRARY_H

@class NSMutableArray, NSCondition;

#import <Foundation/Foundation.h>


@interface TSUDateParserLibrary : NSObject {
    NSUInteger mMaxPermittedParsers;
    NSUInteger mNumberOfUses;
    NSUInteger mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedDateParserLibrary;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)checkoutDateParser;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(void)release;
-(void)returnDateParser:(id)arg0 ;


@end


#endif