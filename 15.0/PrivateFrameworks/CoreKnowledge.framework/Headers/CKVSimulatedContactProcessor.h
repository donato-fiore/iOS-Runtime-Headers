// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSIMULATEDCONTACTPROCESSOR_H
#define CKVSIMULATEDCONTACTPROCESSOR_H

@class NSString;
@protocol CKVSimulatedDatasetProcessor;

#import <Foundation/Foundation.h>


@interface CKVSimulatedContactProcessor : NSObject <CKVSimulatedDatasetProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)targetItemClass;
+(id)dictionaryFromVocabularyItem:(id)arg0 ;
+(id)targetDirectoryURL;
+(id)targetOriginApp;
+(id)vocabularyItemFromDictionary:(id)arg0 ;


@end


#endif