// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCEMENTRESULT_H
#define ANANNOUNCEMENTRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ANAnnouncementDestination.h"

@interface ANAnnouncementResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *deliveredAnnouncementID; // ivar: _deliveredAnnouncementID
@property (readonly, nonatomic) ANAnnouncementDestination *destination; // ivar: _destination


+(BOOL)supportsSecureCoding;
+(id)resultWithAnnouncementID:(id)arg0 destination:(id)arg1 ;
-(id)description;
-(id)initWithAnnouncementID:(id)arg0 destination:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif