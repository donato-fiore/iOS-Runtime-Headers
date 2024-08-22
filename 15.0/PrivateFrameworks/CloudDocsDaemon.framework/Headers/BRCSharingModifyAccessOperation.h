// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSHARINGMODIFYACCESSOPERATION_H
#define BRCSHARINGMODIFYACCESSOPERATION_H

@class BRCFrameworkOperation, NSData, NSString;
@protocol BRCOperationSubclass;


#import "BRCDocumentItem.h"

@interface BRCSharingModifyAccessOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    BRCDocumentItem *_document;
    BOOL _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithItem:(id)arg0 allowAccess:(BOOL)arg1 ;
-(void)main;


@end


#endif