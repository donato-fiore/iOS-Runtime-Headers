// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELJOINACTION_H
#define CXCHANNELJOINACTION_H

@class NSURL, NSString;


#import "CXChannelAction.h"
#import "CXChannelUpdate.h"

@interface CXChannelJoinAction : CXChannelAction

@property (readonly, nonatomic) CXChannelUpdate *channelUpdate; // ivar: _channelUpdate
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *name;


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)initWithChannelUUID:(id)arg0 name:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif