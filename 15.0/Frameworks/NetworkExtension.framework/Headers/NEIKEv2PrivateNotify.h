// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2PRIVATENOTIFY_H
#define NEIKEV2PRIVATENOTIFY_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2PrivateNotify : NSObject <NSCopying>



@property (retain, nonatomic) NSData *notifyData; // ivar: _notifyData
@property (nonatomic) unsigned short notifyStatus; // ivar: _notifyStatus


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNotifyStatus:(unsigned short)arg0 notifyData:(id)arg1 ;


@end


#endif