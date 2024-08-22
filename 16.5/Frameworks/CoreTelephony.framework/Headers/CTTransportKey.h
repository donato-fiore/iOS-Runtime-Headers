// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTTRANSPORTKEY_H
#define CTTRANSPORTKEY_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTTransportKey : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int index; // ivar: _index
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (retain, nonatomic) NSData *key_epki; // ivar: _key_epki
@property (nonatomic) BOOL last_resort; // ivar: _last_resort
@property (retain, nonatomic) NSData *retiredKey_epki; // ivar: _retiredKey_epki


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 epki:(id)arg1 forIdx:(int)arg2 toReplace:(id)arg3 epki:(id)arg4 ;
-(id)initWithKey:(id)arg0 epki:(id)arg1 forIdx:(int)arg2 toReplaceEpki:(id)arg3 isLastResort:(BOOL)arg4 ;
-(id)initWithKey:(id)arg0 forIdx:(int)arg1 toReplace:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif