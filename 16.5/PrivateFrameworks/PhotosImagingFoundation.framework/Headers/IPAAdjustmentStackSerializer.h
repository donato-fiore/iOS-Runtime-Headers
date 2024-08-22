// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAADJUSTMENTSTACKSERIALIZER_H
#define IPAADJUSTMENTSTACKSERIALIZER_H

@class NSString;
@protocol IPAAdjustmentStackSerializer;

#import <Foundation/Foundation.h>


@interface IPAAdjustmentStackSerializer : NSObject <IPAAdjustmentStackSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)B64StringForData:(id)arg0 ;
+(id)JSONFromData:(id)arg0 ;
+(id)JSONFromData:(id)arg0 error:(*id)arg1 ;
+(id)archiveDictionary:(id)arg0 ;
+(id)archiveDictionary:(id)arg0 error:(*id)arg1 ;
+(id)compressData:(id)arg0 ;
+(id)compressData:(id)arg0 error:(*id)arg1 ;
+(id)dataFromB64String:(id)arg0 ;
+(id)dataFromJSON:(id)arg0 ;
+(id)dataFromJSON:(id)arg0 error:(*id)arg1 ;
+(id)dataFromPropertyList:(id)arg0 ;
+(id)dataFromPropertyList:(id)arg0 error:(*id)arg1 ;
+(id)decompressData:(id)arg0 ;
+(id)decompressData:(id)arg0 error:(*id)arg1 ;
+(id)propertyListFromData:(id)arg0 ;
+(id)propertyListFromData:(id)arg0 error:(*id)arg1 ;
+(id)unarchiveData:(id)arg0 ;
+(id)unarchiveData:(id)arg0 error:(*id)arg1 ;
-(id)_adjustmentStackFromData:(id)arg0 error:(*id)arg1 ;
-(id)_dataFromAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)adjustmentStackFromData:(id)arg0 error:(*id)arg1 ;
-(id)archiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)dataFromAdjustmentStack:(id)arg0 error:(*id)arg1 ;
-(id)dataFromArchive:(id)arg0 error:(*id)arg1 ;


@end


#endif