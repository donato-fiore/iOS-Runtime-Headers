// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSRECORDBUILDER_H
#define LSRECORDBUILDER_H


#import <Foundation/Foundation.h>

#import "_LSDatabase.h"

@interface LSRecordBuilder : NSObject {
    _LSDatabase *_db;
}




+(id)recordBuilderForType:(NSUInteger)arg0 ;
-(BOOL)parseInfoPlist:(id)arg0 ;
-(BOOL)parseInstallationInfo:(id)arg0 ;
-(unsigned int)registerBundleRecord:(id)arg0 error:(*id)arg1 ;
-(void)parseiTunesMetadata:(id)arg0 ;
-(void)setDatabase:(id)arg0 ;


@end


#endif