// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCEMENTREQUEST_H
#define ANANNOUNCEMENTREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ANAnnouncementContent.h"
#import "ANAnnouncementDestination.h"

@interface ANAnnouncementRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, nonatomic) ANAnnouncementContent *content; // ivar: _content
@property (readonly, nonatomic) ANAnnouncementDestination *destination; // ivar: _destination


+(BOOL)supportsSecureCoding;
+(id)requestWithContent:(id)arg0 destination:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 destination:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif