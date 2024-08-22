// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDDATABASELEGACYXPCBRIDGE_H
#define IMDDATABASELEGACYXPCBRIDGE_H


#import <Foundation/Foundation.h>


@interface IMDDatabaseLegacyXPCBridge : NSObject



-(id)_attachmentRecordsCopiedFromXPCArray:(id)arg0 ;
-(id)_chatRecordsCopiedFromXPCArray:(id)arg0 ;
-(id)_codableDictionaryCopiedFromXPCDictionary:(id)arg0 objectClass:(Class)arg1 ;
-(id)_codableObjectsCopiedFromXPCArray:(id)arg0 objectClass:(Class)arg1 ;
-(id)_messageRecordsCopiedFromXPCArray:(id)arg0 ;
-(id)_xpcArrayWithAttachmentRecords:(id)arg0 ;
-(id)_xpcArrayWithChatRecords:(id)arg0 ;
-(id)_xpcArrayWithCodableObjects:(id)arg0 ;
-(id)_xpcArrayWithMessageRecords:(id)arg0 ;
-(id)_xpcDictionaryWithCodableObjects:(id)arg0 ;


@end


#endif