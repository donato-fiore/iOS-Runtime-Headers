// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCDESCRIBER_H
#define ASCDESCRIBER_H

@class NSMutableArray;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface ASCDescriber : NSObject

@property (readonly, nonatomic) NSObject<NSObject> *object; // ivar: _object
@property (readonly, nonatomic) NSMutableArray *properties; // ivar: _properties


+(id)nilObject;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)describeObject;
-(id)describeProperties;
-(id)description;
-(id)finalizeDescription;
-(id)initWithObject:(id)arg0 ;
-(void)addBool:(BOOL)arg0 withName:(id)arg1 ;
-(void)addDouble:(CGFloat)arg0 withName:(id)arg1 ;
-(void)addInt64:(NSInteger)arg0 withName:(id)arg1 ;
-(void)addInteger:(NSInteger)arg0 withName:(id)arg1 ;
-(void)addObject:(id)arg0 withName:(id)arg1 ;
-(void)addSensitiveObject:(id)arg0 withName:(id)arg1 ;
-(void)addUInt64:(NSUInteger)arg0 withName:(id)arg1 ;
-(void)addUnsignedInteger:(NSUInteger)arg0 withName:(id)arg1 ;


@end


#endif