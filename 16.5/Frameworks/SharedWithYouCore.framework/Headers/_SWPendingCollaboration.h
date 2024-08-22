// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWPENDINGCOLLABORATION_H
#define _SWPENDINGCOLLABORATION_H

@class NSString, NSURL, NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_SWCollaborationMetadata.h"

@interface _SWPendingCollaboration : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>



@property (copy, nonatomic) _SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollaborationContent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAPIMetadata:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileAtURL:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)processSigningQueue;
-(id)softSigningController;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif