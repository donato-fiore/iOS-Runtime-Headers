// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETREADINGHISTORYDATAFILE_H
#define BDSBOOKWIDGETREADINGHISTORYDATAFILE_H


#import <Foundation/Foundation.h>

#import "BDSSharedDataFile.h"

@interface BDSBookWidgetReadingHistoryDataFile : NSObject

@property (readonly, nonatomic) BDSSharedDataFile *dataFile; // ivar: _dataFile


+(id)defaultDataURL;
+(id)sharedInstance;
-(id)init;
-(id)load;
-(void)save:(id)arg0 ;


@end


#endif