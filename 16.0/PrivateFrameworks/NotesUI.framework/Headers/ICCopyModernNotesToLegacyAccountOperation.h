// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCOPYMODERNNOTESTOLEGACYACCOUNTOPERATION_H
#define ICCOPYMODERNNOTESTOLEGACYACCOUNTOPERATION_H

@class NSOperation, NSArray;
@protocol ICLegacyFolder, ICLegacyContext;



@interface ICCopyModernNotesToLegacyAccountOperation : NSOperation

@property (retain, nonatomic) NSObject<ICLegacyFolder> *destinationFolder; // ivar: _destinationFolder
@property (copy, nonatomic) id *didCopyBlock; // ivar: _didCopyBlock
@property (retain, nonatomic) NSObject<ICLegacyContext> *legacyContext; // ivar: _legacyContext
@property (copy, nonatomic) NSArray *sourceNotes; // ivar: _sourceNotes


-(id)copyNote:(id)arg0 toFolder:(id)arg1 ;
-(id)dataForAttachment:(id)arg0 outFilename:(*id)arg1 outMimeType:(*id)arg2 ;
-(id)ensureLegacyFolderIsValid:(id)arg0 ;
-(id)htmlAttributesForAttachment:(id)arg0 legacyContentID:(id)arg1 tagName:(*id)arg2 ;
-(id)init;
-(id)initWithNotes:(id)arg0 toFolder:(id)arg1 legacyContext:(id)arg2 didCopyBlock:(id)arg3 ;
-(void)main;


@end


#endif