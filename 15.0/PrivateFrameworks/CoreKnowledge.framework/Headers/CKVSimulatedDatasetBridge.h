// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(BOOL)enumerateVocabularyItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(Class)itemClass;
-(id)init;
-(id)initWithDatasetType:(unsigned short)arg0 ;
-(id)originApp;


@end


#endif