// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADFLAGS_H
#define ADFLAGS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ADFlags : NSObject <NSCopying>



@property NSUInteger flags; // ivar: _flags


+(id)initWithFlags:(NSUInteger)arg0 ;
-(BOOL)allSet:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSet:(NSUInteger)arg0 ;
-(BOOL)noneSet;
-(NSUInteger)anySet:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)reset;
-(void)set:(NSUInteger)arg0 ;
-(void)unset:(NSUInteger)arg0 ;


@end


#endif