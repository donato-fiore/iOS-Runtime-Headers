// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDDODMLATTACHMENTPROCESSOR_H
#define AMDDODMLATTACHMENTPROCESSOR_H

@class NSMutableDictionary, NSData;

#import <Foundation/Foundation.h>


@interface AMDDODMLAttachmentProcessor : NSObject {
    NSMutableDictionary *_hashMapAttachments;
    NSMutableDictionary *_downSampleAttachments;
    NSMutableDictionary *_negSampleAttachements;
    NSData *_weightAttachment;
}




-(id)downSampleDictionaryForKey:(id)arg0 ;
-(id)getURLFromURLArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)hashMapForKey:(id)arg0 ;
-(id)initWithAttachmentURLs:(id)arg0 withInstructions:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)initWithHashMapDictionary:(id)arg0 withDownSampleDictionary:(id)arg1 withNegSampleDictionary:(id)arg2 ;
-(id)negSampleArrayForKey:(id)arg0 ;
-(id)readDownSampleDictionary:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readDownSampleDictionaryBytes:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readHashMapDictionary:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readHashMapDictionaryBytes:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readNegativeSampleArray:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readNegativeSampleArrayBytes:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)readWeightsArrayBytes:(id)arg0 withAttachments:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)setHashMap:(id)arg0 forKey:(id)arg1 ;
-(id)weightsArray;


@end


#endif