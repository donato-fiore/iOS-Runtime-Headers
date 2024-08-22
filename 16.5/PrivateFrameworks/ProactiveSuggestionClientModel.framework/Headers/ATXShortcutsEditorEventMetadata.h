// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSHORTCUTSEDITOREVENTMETADATA_H
#define ATXSHORTCUTSEDITOREVENTMETADATA_H

@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXPBShortcutsEditorEventMetadata.h"

@interface ATXShortcutsEditorEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

 {
    ATXPBShortcutsEditorEventMetadata *_proto;
}


@property (nonatomic) NSUInteger numStepsInShortcut;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXShortcutsEditorEventMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumStepsInShortcut:(NSUInteger)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif