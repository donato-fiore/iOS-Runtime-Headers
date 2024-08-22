// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVJSONPROFILEREADER_H
#define KVJSONPROFILEREADER_H

@class NSData, NSDictionary, NSArray, NSString;
@protocol KVProfileReader;

#import <Foundation/Foundation.h>

#import "KVProfileInfo.h"

@interface KVJSONProfileReader : NSObject <KVProfileReader>

 {
    NSData *_data;
    NSDictionary *_profile;
    KVProfileInfo *_profileInfo;
    NSArray *_datasets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateDatasetsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)profileInfo;


@end


#endif