// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSYSCONFIG_H
#define CRSYSCONFIG_H


#import <Foundation/Foundation.h>


@interface CRSysConfig : NSObject

@property (nonatomic) BOOL isADDASysCfgAccessType; // ivar: _isADDASysCfgAccessType
@property (nonatomic) unsigned int syscfgAccess; // ivar: _syscfgAccess


+(id)sharedAccess;
-(BOOL)dataIsValid:(struct _syscfgEntry *)arg0 length:(unsigned int)arg1 ;
-(BOOL)findSyscfgAccess;
-(BOOL)syscfgUpdate:(char *)arg0 key:(unsigned int)arg1 buffer:(char *)arg2 length:(unsigned int)arg3 ;
-(BOOL)writeSystemConfig:(unsigned int)arg0 inBuffer:(id)arg1 ;
-(id)createStringForKey:(unsigned int)arg0 ;
-(id)init;
-(id)readSystemConfigAll;
-(id)readSystemConfigArea;
-(struct _syscfgEntry *)findEntry:(char *)arg0 key:(unsigned int)arg1 ;


@end


#endif