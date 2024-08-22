// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCNAVIGATIONMANEUVERUPDATEINFO_H
#define ACCNAVIGATIONMANEUVERUPDATEINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACCNavigationManeuverUpdateInfo : NSObject

@property (retain) NSMutableDictionary *infoDict; // ivar: _infoDict


+(id)keyForType:(unsigned short)arg0 ;
-(BOOL)_checkDataClassForType:(unsigned short)arg0 data:(id)arg1 ;
-(BOOL)setInfo:(unsigned short)arg0 data:(id)arg1 ;
-(id)copyDictionary;
-(id)copyInfo:(unsigned short)arg0 ;
-(id)init;


@end


#endif