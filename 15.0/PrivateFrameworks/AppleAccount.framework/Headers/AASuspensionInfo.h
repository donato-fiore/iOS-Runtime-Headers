// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AASUSPENSIONINFO_H
#define AASUSPENSIONINFO_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AASuspensionInfo : NSObject <NSCopying>

 {
    NSDictionary *_suspensionInfoDictionary;
}


@property (readonly, nonatomic, getter=isFamilySuspended) BOOL familySuspended;
@property (readonly, nonatomic, getter=isiCloudSuspended) BOOL iCloudSuspended;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif