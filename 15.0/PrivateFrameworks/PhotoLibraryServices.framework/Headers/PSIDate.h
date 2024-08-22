// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSIDATE_H
#define PSIDATE_H


#import <Foundation/Foundation.h>


@interface PSIDate : NSObject

@property (readonly) NSInteger day;
@property (readonly) NSInteger era;
@property (readonly) NSInteger int64Representation; // ivar: _int64Representation
@property (readonly) NSInteger int64RepresentationMask; // ivar: _int64RepresentationMask
@property (readonly) NSInteger month;
@property (readonly) NSInteger year;


+(id)distantFuture;
+(id)distantPast;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dateComponents;
-(id)description;
-(id)initWithDateComponents:(id)arg0 ;
-(id)initWithInt64Representation:(NSInteger)arg0 ;
-(id)initWithUniversalDate:(id)arg0 calendar:(id)arg1 ;


@end


#endif