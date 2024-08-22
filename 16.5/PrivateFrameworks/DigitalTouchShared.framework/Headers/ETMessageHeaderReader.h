// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETMESSAGEHEADERREADER_H
#define ETMESSAGEHEADERREADER_H


#import <Foundation/Foundation.h>


@interface ETMessageHeaderReader : NSObject



+(CGFloat)sendTimeInArchive:(id)arg0 ;
+(id)identifierInArchive:(id)arg0 ;
+(unsigned short)messageTypeInArchive:(id)arg0 ;
+(void)getSendTime:(*CGFloat)arg0 type:(*unsigned short)arg1 inArchive:(id)arg2 ;


@end


#endif