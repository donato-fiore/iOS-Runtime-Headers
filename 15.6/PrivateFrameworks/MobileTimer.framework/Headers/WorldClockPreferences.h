// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WORLDCLOCKPREFERENCES_H
#define WORLDCLOCKPREFERENCES_H


#import <Foundation/Foundation.h>


@interface WorldClockPreferences : NSObject



-(BOOL)defaultCitiesAdded;
-(BOOL)synchronize;
-(id)cities;
-(id)defaultsKeys;
-(id)lastModified;
-(void)setCities:(id)arg0 ;
-(void)setDefaultCitiesAdded:(BOOL)arg0 ;
-(void)setLastModified:(id)arg0 ;


@end


#endif