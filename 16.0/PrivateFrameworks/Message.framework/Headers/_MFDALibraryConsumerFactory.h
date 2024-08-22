// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDALIBRARYCONSUMERFACTORY_H
#define _MFDALIBRARYCONSUMERFACTORY_H

@class NSString, MFMessage;
@protocol MFMessageDataConsumerFactory;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) MFMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(id)dataConsumerForPart:(id)arg0 ;


@end


#endif