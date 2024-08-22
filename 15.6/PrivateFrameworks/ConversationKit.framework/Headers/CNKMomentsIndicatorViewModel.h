// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKMOMENTSINDICATORVIEWMODEL_H
#define CNKMOMENTSINDICATORVIEWMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNKMomentsIndicatorViewModel : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger refreshCount; // ivar: _refreshCount
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)shouldShowCount;
-(NSUInteger)captureCount;
-(id)initWithType:(NSInteger)arg0 remoteParticipantName:(id)arg1 ;
-(void)refresh;


@end


#endif