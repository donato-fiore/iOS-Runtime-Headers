// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCONFIDENCEMODELFORSHARING_H
#define _PSCONFIDENCEMODELFORSHARING_H


#import <Foundation/Foundation.h>

#import "_PSConfidenceModelDriver.h"

@interface _PSConfidenceModelForSharing : NSObject

@property BOOL _PSConfidenceModelInUse; // ivar: __PSConfidenceModelInUse
@property (retain, nonatomic) _PSConfidenceModelDriver *confidenceModelDriver; // ivar: _confidenceModelDriver


-(BOOL)addEventForModel:(id)arg0 event:(id)arg1 ;
-(BOOL)findObjectWithID:(id)arg0 inArray:(id)arg1 ;
-(CGFloat)getConfidenceForModel:(id)arg0 ;
-(id)getConfidenceRankedModelKeysGivenKeysToSort:(id)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;


@end


#endif