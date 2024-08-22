// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCARPLAYCONNECTEDTRIGGER_H
#define ATXCARPLAYCONNECTEDTRIGGER_H

@class NSString;
@protocol ATXTrigger;

#import <Foundation/Foundation.h>


@interface ATXCarPlayConnectedTrigger : NSObject <ATXTrigger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif