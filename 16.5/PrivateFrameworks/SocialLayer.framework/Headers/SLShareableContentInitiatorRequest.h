// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHAREABLECONTENTINITIATORREQUEST_H
#define SLSHAREABLECONTENTINITIATORREQUEST_H

@class _SWCollaborationMetadata, CKContainerSetupInfo, NSString, NSURL;
@protocol BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLShareableContentInitiatorRequest : NSObject <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationMetadata:(id)arg0 ;
-(id)initWithContainerSetupInfo:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 containerSetupInfo:(id)arg1 collaborationMetadata:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif