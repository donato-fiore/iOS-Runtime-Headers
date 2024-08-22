// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIAKEYINDEX_H
#define VCMEDIAKEYINDEX_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaKeyIndex : NSObject <NSCopying>

 {
    unsigned char _MKI;
    unsigned int _activeSize;
    BOOL _isMapped;
    unsigned char _mapKey;
}


@property (readonly) unsigned int activeSize;
@property (readonly) BOOL isMapped;
@property (readonly) unsigned char mapKey;


+(id)makeInvalidKey;
+(id)newMKIWithBytes:(char *)arg0 bufferSize:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStartingWithPrefix:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)setMapping:(unsigned char)arg0 ;
-(NSUInteger)hash;
-(char *)MKI;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBytes:(char *)arg0 bufferSize:(unsigned int)arg1 ;
-(id)initWithNSUUID:(id)arg0 ;
-(id)initWithUUID:(unsigned char)arg0 ;
-(unsigned int)mappedKeyBytes:(char *)arg0 size:(unsigned int)arg1 ;
-(unsigned int)mappedKeySize;
-(void)dealloc;
-(void)fullKeyBytes:(unsigned char)arg0 ;


@end


#endif