// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPMESSAGESPAYLOAD_H
#define LPMESSAGESPAYLOAD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"

@interface LPMessagesPayload : NSObject <NSSecureCoding>



@property (copy, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL needsCompleteFetch; // ivar: _needsCompleteFetch
@property (nonatomic) BOOL needsSubresourceFetch; // ivar: _needsSubresourceFetch
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder


+(BOOL)supportsSecureCoding;
+(id)_linkWithDataRepresentation:(id)arg0 substitutingAttachments:(BOOL)arg1 attachments:(id)arg2 ;
+(id)linkWithDataRepresentation:(id)arg0 attachments:(id)arg1 ;
+(id)linkWithDataRepresentationWithoutSubstitutingAttachments:(id)arg0 ;
-(BOOL)_needsWorkaroundForAppStoreTransformerCrash;
-(id)dataRepresentationWithOutOfLineAttachments:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performSubstitutionWithAttachments:(id)arg0 ;


@end


#endif