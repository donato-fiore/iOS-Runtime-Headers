// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFATTACHMENTPLACEHOLDER_H
#define MFATTACHMENTPLACEHOLDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}




+(BOOL)isPlaceholderSerializedRepresentation:(id)arg0 ;
+(id)_placeholderMagic;
+(id)dataForPlaceholder:(id)arg0 ;
+(id)placeholder;
+(id)placeholderFromSerializedRepresentation:(id)arg0 ;
-(BOOL)useMailDrop;
-(NSUInteger)fileSize;
-(id)contentID;
-(id)description;
-(id)fileName;
-(id)fileURL;
-(id)fileURLString;
-(id)init;
-(id)mimeType;
-(id)serializedRepresentation;
-(void)_setJSONDictionary:(id)arg0 ;
-(void)dealloc;
-(void)setContentID:(id)arg0 ;
-(void)setFileName:(id)arg0 ;
-(void)setFileSize:(NSUInteger)arg0 ;
-(void)setFileURLString:(id)arg0 ;
-(void)setMimeType:(id)arg0 ;
-(void)setUseMailDrop:(BOOL)arg0 ;


@end


#endif