// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNETWORKEVENTGROUPKEY_H
#define FCNETWORKEVENTGROUPKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCNetworkEventGroupKey : NSObject <NSCopying>

 {
    int _eventType;
    NSUInteger _sessionID;
    NSString *_respondingPOP;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif