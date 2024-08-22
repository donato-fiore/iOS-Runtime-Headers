// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKTAPTORADARMANAGER_H
#define NPKTAPTORADARMANAGER_H


#import <Foundation/Foundation.h>


@interface NPKTapToRadarManager : NSObject



-(id)_applicationWorkSpace;
-(void)_openTapToRadarWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_requestUserPermisionToFileRadarWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fileRadarWithRequest:(id)arg0 requestUserPermision:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif