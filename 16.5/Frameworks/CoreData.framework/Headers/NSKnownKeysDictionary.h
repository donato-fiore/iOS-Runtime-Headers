// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKNOWNKEYSDICTIONARY_H
#define NSKNOWNKEYSDICTIONARY_H

@class NSMutableDictionary;


#import "NSKnownKeysMappingStrategy.h"

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (readonly, nonatomic) NSKnownKeysMappingStrategy *mapping;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)classesForArchiving;
+(id)newInstanceWithSearchStrategy:(id)arg0 inData:(id)arg1 ;
-(*id)values;
-(id)initForKeys:(id)arg0 ;
-(id)initWithSearchStrategy:(id)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)_setValues:(*id)arg0 retain:(BOOL)arg1 ;
-(void)getKeys:(*id)arg0 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValues:(*id)arg0 ;


@end


#endif