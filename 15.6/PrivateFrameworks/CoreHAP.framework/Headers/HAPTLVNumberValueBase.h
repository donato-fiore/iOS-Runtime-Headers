// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPTLVNUMBERVALUEBASE_H
#define HAPTLVNUMBERVALUEBASE_H

@class NSString, NSNumber;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)_parseFromData:(char *)arg0 length:(NSUInteger)arg1 status:(*int)arg2 ;
-(id)_serialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithValue:(id)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif