// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASIMPORTITEMDATA_H
#define ICASIMPORTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASImportFileType.h"

@interface ICASImportItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASImportFileType *importFileType; // ivar: _importFileType
@property (readonly, nonatomic) NSNumber *importItemCount; // ivar: _importItemCount


+(id)dataName;
-(id)initWithImportFileType:(id)arg0 importItemCount:(id)arg1 ;
-(id)toDict;


@end


#endif