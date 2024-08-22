// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSIMULATEDDATASETBRIDGE_H
#define CKVSIMULATEDDATASETBRIDGE_H

@class NSURL, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVSimulatedDatasetBridge : NSObject <CKVProviderDatasetBridge>

 {
    NSURL *_directoryURL;
    unsigned short _datasetType;
    Class _processorClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_directoryExistsAtURL:(id)arg0 ;
-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithDatasetType:(unsigned short)arg0 ;
-(id)originAppId;


@end


#endif