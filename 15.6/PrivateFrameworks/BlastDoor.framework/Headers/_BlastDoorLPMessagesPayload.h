// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPMESSAGESPAYLOAD_H
#define _BLASTDOORLPMESSAGESPAYLOAD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPLinkMetadata.h"

@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding>



@property (copy, nonatomic) _BlastDoorLPLinkMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL needsCompleteFetch; // ivar: _needsCompleteFetch
@property (nonatomic) BOOL needsSubresourceFetch; // ivar: _needsSubresourceFetch
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder


+(BOOL)supportsSecureCoding;
+(id)linkWithDataRepresentation:(id)arg0 attachments:(id)arg1 ;
-(BOOL)_needsWorkaroundForAppStoreTransformerCrash;
-(id)dataRepresentationWithOutOfLineAttachments:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif