// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRCOLLABORATIONDATA_H
#define PRCOLLABORATIONDATA_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRPeer.h"

@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSData *data; // ivar: _data
@property (readonly) PRPeer *sendingPeer; // ivar: _sendingPeer


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 sendingPeer:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif