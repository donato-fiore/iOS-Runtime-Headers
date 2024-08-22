// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVEMBEDDEDPROFILEREADER_H
#define KVEMBEDDEDPROFILEREADER_H

@class NSData, NSString;
@protocol KVProfileReader;

#import <Foundation/Foundation.h>

#import "KVProfileInfo.h"

@interface KVEmbeddedProfileReader : NSObject <KVProfileReader>

 {
    NSData *_data;
    *Profile _profile;
    KVProfileInfo *_profileInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateDatasetsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg0 profile:(struct Profile *)arg1 profileInfo:(id)arg2 ;
-(id)profileInfo;


@end


#endif