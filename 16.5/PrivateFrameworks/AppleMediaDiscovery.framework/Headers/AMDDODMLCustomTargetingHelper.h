// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDDODMLCUSTOMTARGETINGHELPER_H
#define AMDDODMLCUSTOMTARGETINGHELPER_H


#import <Foundation/Foundation.h>


@interface AMDDODMLCustomTargetingHelper : NSObject



-(id)callAMDClient:(id)arg0 error:(*id)arg1 ;
-(id)getDictionaryValueDataType:(id)arg0 error:(*id)arg1 ;
-(id)getOperationsArray;
-(id)init;
-(id)mainTargetingResolver:(id)arg0 error:(*id)arg1 ;
-(id)parseData:(id)arg0 withArray:(id)arg1 error:(*id)arg2 ;
-(id)performOperation:(id)arg0 onArray:(id)arg1 error:(*id)arg2 ;
-(id)postProc:(id)arg0 withDirections:(id)arg1 error:(*id)arg2 ;


@end


#endif