// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYDEGENERATECHANGE_H
#define SYDEGENERATECHANGE_H

@class NSString;
@protocol SYChange;

#import <Foundation/Foundation.h>


@interface SYDegenerateChange : NSObject <SYChange>



@property (readonly, nonatomic) NSInteger changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;


+(BOOL)isDegenerate:(id)arg0 ;
+(id)degenerateChange;


@end


#endif