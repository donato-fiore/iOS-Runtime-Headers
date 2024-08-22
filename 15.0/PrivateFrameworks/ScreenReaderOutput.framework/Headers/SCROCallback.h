// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROCALLBACK_H
#define SCROCALLBACK_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCROCallback : NSObject <NSSecureCoding>

 {
    int _key;
    id<NSSecureCoding> *_object;
    BOOL _isAtomic;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isAtomic;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(int)arg0 object:(id)arg1 ;
-(id)object;
-(int)key;
-(void)encodeWithCoder:(id)arg0 ;
-(void)postToHandler:(id)arg0 ;
-(void)setIsAtomic:(BOOL)arg0 ;


@end


#endif