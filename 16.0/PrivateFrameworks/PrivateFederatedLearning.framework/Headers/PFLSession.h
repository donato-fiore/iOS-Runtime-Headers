// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLSESSION_H
#define PFLSESSION_H

@protocol PFLDataSource, PFLResumable;

#import <Foundation/Foundation.h>


@interface PFLSession : NSObject

@property (retain, nonatomic) NSObject<PFLDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<PFLResumable> *underlyingTask; // ivar: _underlyingTask


+(id)sessionForTesting;
+(id)sharedInstance;
-(BOOL)registerWithSource:(id)arg0 ;
-(BOOL)resume;
-(id)init;
-(void)suspend;
-(void)updateModel:(id)arg0 modelConfiguration:(id)arg1 layerNamesToPrivatize:(id)arg2 privatizationIdentifier:(id)arg3 privatizationNormMax:(CGFloat)arg4 privatizationNormBinCount:(NSUInteger)arg5 completionHandler:(id)arg6 ;


@end


#endif