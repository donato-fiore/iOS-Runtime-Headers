// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGECHANNELREQUEST_H
#define COMESSAGECHANNELREQUEST_H

@protocol NSSecureCoding, OS_nw_activity;

#import <Foundation/Foundation.h>


@interface COMessageChannelRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_nw_activity> *activity; // ivar: _activity


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif