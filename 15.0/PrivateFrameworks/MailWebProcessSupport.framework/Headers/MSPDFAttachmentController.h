// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPDFATTACHMENTCONTROLLER_H
#define MSPDFATTACHMENTCONTROLLER_H

@class NSString;
@protocol MSMailWebProcessAttachmentProxy, MSPDFAttachmentControllerDelegate;

#import <Foundation/Foundation.h>


@interface MSPDFAttachmentController : NSObject <MSMailWebProcessAttachmentProxy>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPDFAttachmentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(void)updateToInlinePDFAttachmentIfNeeded:(id)arg0 ;


@end


#endif