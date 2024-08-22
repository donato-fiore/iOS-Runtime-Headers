// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSTREAMPROFILEREADER_H
#define KVSTREAMPROFILEREADER_H

@class NSData, NSString;
@protocol KVProfileReader;

#import <Foundation/Foundation.h>

#import "KVProfileInfo.h"

@interface KVStreamProfileReader : NSObject <KVProfileReader>

 {
    NSData *_data;
    KVProfileInfo *_profileInfo;
    unsigned int _offset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateDatasetsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)initWithData:(id)arg0 profileInfo:(id)arg1 offset:(unsigned int)arg2 ;
-(id)profileInfo;


@end


#endif