// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSHASH_H
#define VSHASH_H

@class NSData;

#import <Foundation/Foundation.h>


@interface VSHash : NSObject

@property (nonatomic) CC_SHA256state_st ctx; // ivar: _ctx
@property (copy, nonatomic) NSData *finalData; // ivar: _finalData
@property (nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized


-(id)init;
-(void)dealloc;
-(void)updateWithData:(id)arg0 ;
-(void)updateWithDate:(id)arg0 ;
-(void)updateWithInteger:(NSInteger)arg0 ;
-(void)updateWithString:(id)arg0 ;
-(void)updateWithUUID:(id)arg0 ;


@end


#endif