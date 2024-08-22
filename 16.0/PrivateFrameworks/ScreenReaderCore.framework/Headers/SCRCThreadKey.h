// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCTHREADKEY_H
#define SCRCTHREADKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SCRCThreadKey : NSObject <NSCopying>

 {
    NSUInteger _threadID;
    NSString *_threadDescription;
}


@property (readonly, nonatomic) NSString *threadDescription;
@property (readonly, nonatomic) NSUInteger threadID;


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_allCurrentThreadIDs;
-(id)_initWithThreadID:(NSUInteger)arg0 description:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDescription:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif