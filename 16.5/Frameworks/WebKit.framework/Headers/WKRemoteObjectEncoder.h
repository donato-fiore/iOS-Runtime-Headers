// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKREMOTEOBJECTENCODER_H
#define WKREMOTEOBJECTENCODER_H

@class NSCoder;



@interface WKRemoteObjectEncoder : NSCoder {
    RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> _rootDictionary;
    *void _objectStream;
    *void _currentDictionary;
    HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits> _objectsBeingEncoded;
}




-(*void)rootObjectDictionary;
-(BOOL)allowsKeyedCoding;
-(BOOL)requiresSecureCoding;
-(id)init;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;


@end


#endif