// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSFTZKWTRIALWRAPPER_H
#define _PSFTZKWTRIALWRAPPER_H

@class _PASLock, TRIClient;

#import <Foundation/Foundation.h>


@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}


@property (readonly, nonatomic) TRIClient *triClient; // ivar: _triClient


+(id)sharedInstance;
+(void)runIfUpdated:(id)arg0 ;
+(void)runWithData:(id)arg0 ;
-(BOOL)loadLevelAsBooleanFromFactor:(id)arg0 withDefault:(BOOL)arg1 ;
-(NSInteger)loadLevelAsConfidenceCategoryFromFactor:(id)arg0 withDefault:(NSInteger)arg1 ;
-(NSInteger)loadLevelAsInteractionModelTypeFromFactor:(id)arg0 withDefault:(NSInteger)arg1 ;
-(id)init;
-(void)flagAsSame;
-(void)flagAsUpdated;
-(void)loadFactors;
-(void)refresh;
-(void)runIfUpdated:(id)arg0 ;
-(void)runWithData:(id)arg0 ;


@end


#endif