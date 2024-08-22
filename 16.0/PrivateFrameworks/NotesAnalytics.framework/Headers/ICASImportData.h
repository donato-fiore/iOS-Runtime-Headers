// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASIMPORTDATA_H
#define ICASIMPORTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASImportData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *importSummary; // ivar: _importSummary


+(id)dataName;
-(id)initWithImportSummary:(id)arg0 ;
-(id)toDict;


@end


#endif