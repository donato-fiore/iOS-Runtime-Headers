// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTARGETNAVIGATORCLUSTERTARGETINFOSTRUCT_H
#define MTRTARGETNAVIGATORCLUSTERTARGETINFOSTRUCT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRTargetNavigatorClusterTargetInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif