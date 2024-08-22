// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPHOENIXDATAPACKAGER_H
#define AXPHOENIXDATAPACKAGER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXPhoenixDataPackager : NSObject

@property (retain, nonatomic) NSArray *allowedFileSuffixes; // ivar: _allowedFileSuffixes
@property (retain, nonatomic) NSString *dataDirectory; // ivar: _dataDirectory


-(BOOL)isValidFile:(id)arg0 ;
-(id)_archiveDirectory:(id)arg0 ;
-(id)_buildPackageDirectoryNameFromFilename:(id)arg0 withMetadata:(id)arg1 ;
-(id)_createPackageDirectory:(id)arg0 withPackageDirectoryName:(id)arg1 ;
-(id)_getDataForSubsession:(id)arg0 ;
-(id)initWithFileSuffixes:(id)arg0 fromDataDirectory:(id)arg1 ;
-(id)packageDataUsingFiles:(id)arg0 ;


@end


#endif