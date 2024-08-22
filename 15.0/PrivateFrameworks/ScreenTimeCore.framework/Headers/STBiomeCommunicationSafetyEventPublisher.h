// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STBIOMECOMMUNICATIONSAFETYEVENTPUBLISHER_H
#define STBIOMECOMMUNICATIONSAFETYEVENTPUBLISHER_H

@class NSString;
@protocol STCommunicationSafetyEventPublisher;

#import <Foundation/Foundation.h>


@interface STBiomeCommunicationSafetyEventPublisher : NSObject <STCommunicationSafetyEventPublisher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChildIdentifier:(id)arg0 ;
-(id)initWithChildIdentifier:(id)arg0 includePastEvents:(BOOL)arg1 schedulerIdentifier:(id)arg2 ;


@end


#endif