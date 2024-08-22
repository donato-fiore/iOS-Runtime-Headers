// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECMAPPINGINFO_H
#define ECMAPPINGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ECMappingInfo : NSObject

@property (readonly, nonatomic) int columnOffset;
@property (readonly, nonatomic) int rowOffset;
@property (readonly, nonatomic) NSString *sheetName; // ivar: mSheetName


+(id)mappingInfoWithSheetName:(id)arg0 ;
-(id)initWithSheetName:(id)arg0 ;


@end


#endif