// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKSESSIONBEHAVIOR_H
#define STKSESSIONBEHAVIOR_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface STKSessionBehavior : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissesAfterUserEvent; // ivar: _dismissesAfterUserEvent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldSendResponseUponDisplay; // ivar: _shouldSendResponseUponDisplay
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif