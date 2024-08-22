// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBJCVERSION_H
#define OBJCVERSION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ObjCVersion : NSObject {
    ? version;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hasTemporaryComponents;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSInteger maxCounter;
@property (nonatomic, readonly) NSArray *sortedUUIDs;


-(BOOL)contains:(id)arg0 ;
-(BOOL)hasDeltaTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareTo:(id)arg0 ;
-(id)copy;
-(id)init;
-(id)temporaryComponentsWithExcluding:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)insertWithRange:(struct _NSRange )arg0 replica:(id)arg1 ;
-(void)merge:(id)arg0 ;
-(void)subtract:(id)arg0 ;
-(void)subtractWithRange:(struct _NSRange )arg0 replica:(id)arg1 ;


@end


#endif