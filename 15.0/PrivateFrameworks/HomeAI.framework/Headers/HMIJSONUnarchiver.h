// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIJSONUNARCHIVER_H
#define HMIJSONUNARCHIVER_H

@class NSCoder, NSDictionary;



@interface HMIJSONUnarchiver : NSCoder

@property (retain) NSDictionary *classMap; // ivar: _classMap
@property (readonly) id *container; // ivar: _container


+(id)objectWithJSONData:(id)arg0 classMap:(id)arg1 ;
+(id)objectWithJSONObject:(id)arg0 classMap:(id)arg1 ;
+(id)objectWithJSONObjectString:(id)arg0 classMap:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(id)_objectWithJSONObject:(id)arg0 allowedClasses:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)initWithJSONObject:(id)arg0 ;
-(int)decodeInt32ForKey:(id)arg0 ;


@end


#endif