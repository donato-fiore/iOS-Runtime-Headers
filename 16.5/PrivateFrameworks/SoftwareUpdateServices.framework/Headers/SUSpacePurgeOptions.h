// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSPACEPURGEOPTIONS_H
#define SUSPACEPURGEOPTIONS_H

@class NSString;
@protocol NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUSpacePurgeOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger appOffloadUrgency; // ivar: _appOffloadUrgency
@property (retain, nonatomic) NSString *appOffloadVolume; // ivar: _appOffloadVolume
@property (nonatomic) int cacheDeleteUrgency; // ivar: _cacheDeleteUrgency
@property (retain, nonatomic) NSString *cacheDeleteVolume; // ivar: _cacheDeleteVolume
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (nonatomic) BOOL enableAppOffload; // ivar: _enableAppOffload
@property (nonatomic) BOOL enableCacheDelete; // ivar: _enableCacheDelete
@property (nonatomic) NSUInteger neededBytes; // ivar: _neededBytes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif