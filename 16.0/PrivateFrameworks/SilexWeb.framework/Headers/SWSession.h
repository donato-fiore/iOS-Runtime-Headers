// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSESSION_H
#define SWSESSION_H

@class NSString;
@protocol SWSession;

#import <Foundation/Foundation.h>


@interface SWSession : NSObject <SWSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif