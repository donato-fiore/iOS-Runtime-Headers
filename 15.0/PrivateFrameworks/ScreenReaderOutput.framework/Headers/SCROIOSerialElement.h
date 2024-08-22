// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROIOSERIALELEMENT_H
#define SCROIOSERIALELEMENT_H

@class NSString;
@protocol SCROIOSerialElementProtocol;


#import "SCROIOElement.h"

@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fileDescriptor; // ivar: _fileDescriptor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFileDescriptor:(int)arg0 ;
-(int)transport;


@end


#endif