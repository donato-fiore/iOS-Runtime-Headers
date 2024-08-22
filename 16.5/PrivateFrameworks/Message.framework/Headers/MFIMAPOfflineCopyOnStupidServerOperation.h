// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPOFFLINECOPYONSTUPIDSERVEROPERATION_H
#define MFIMAPOFFLINECOPYONSTUPIDSERVEROPERATION_H



#import "MFIMAPOperation.h"

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {
    *__CFArray messageIds;
    *__CFArray internalDates;
}




-(BOOL)getMessageId:(*id)arg0 andInternalDate:(*id)arg1 forDestinationUid:(unsigned int)arg2 ;
-(id)_deserializeOpSpecificValuesFromData:(id)arg0 cursor:(*NSUInteger)arg1 ;
-(unsigned char)_magic;
-(unsigned int)approximateSize;
-(void)dealloc;
-(void)expungeTemporaryUid:(unsigned int)arg0 ;
-(void)serializeIntoData:(id)arg0 ;
-(void)setMessageId:(id)arg0 andInternalDate:(id)arg1 forMessageWithSourceUid:(unsigned int)arg2 ;


@end


#endif