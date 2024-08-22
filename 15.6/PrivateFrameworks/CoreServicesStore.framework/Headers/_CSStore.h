// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CSSTORE_H
#define _CSSTORE_H

@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CSStore : NSObject <NSSecureCoding>

 {
    Store _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}




+(BOOL)supportsSecureCoding;
+(id)new;
+(void)initialize;
-(id)description;
-(id)init;
-(id)initByMovingStore:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithError:(*id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setExpectedAccessQueue:(id)arg0 ;


@end


#endif