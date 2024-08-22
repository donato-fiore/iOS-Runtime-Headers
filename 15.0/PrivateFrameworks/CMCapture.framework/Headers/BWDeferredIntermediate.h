// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDINTERMEDIATE_H
#define BWDEFERREDINTERMEDIATE_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWDeferredIntermediate : NSObject <NSSecureCoding>

 {
    _opaque_pthread_mutex_t _lock;
    _opaque_pthread_cond_t _cv;
    BOOL _prefetching;
    BOOL _dirty;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *tag; // ivar: _tag


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)archive:(*int)arg0 ;
-(id)fetchAndRetain:(*int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 URL:(id)arg1 ;
-(int)flush;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif