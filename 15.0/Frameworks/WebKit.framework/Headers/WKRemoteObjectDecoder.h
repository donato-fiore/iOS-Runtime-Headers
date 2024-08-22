// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKREMOTEOBJECTDECODER_H
#define WKREMOTEOBJECTDECODER_H

@class NSCoder;



@interface WKRemoteObjectDecoder : NSCoder {
    RetainPtr<_WKRemoteObjectInterface> _interface;
    *void _rootDictionary;
    *void _currentDictionary;
    SEL _replyToSelector;
    *void _objectStream;
    NSUInteger _objectStreamPosition;
    *void _allowedClasses;
}




-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(BOOL)requiresSecureCoding;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)allowedClasses;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)initWithInterface:(id)arg0 rootObjectDictionary:(*void)arg1 replyToSelector:(SEL)arg2 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;


@end


#endif