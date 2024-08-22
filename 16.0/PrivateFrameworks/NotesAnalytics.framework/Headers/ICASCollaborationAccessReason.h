// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABORATIONACCESSREASON_H
#define ICASCOLLABORATIONACCESSREASON_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASCollaborationAccessReason : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger collaborationAccessReason; // ivar: _collaborationAccessReason


-(id)initWithCollaborationAccessReason:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif