// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENNOTEREF_H
#define ENNOTEREF_H

@class NSString;
@protocol WFSerializableContent, NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENLinkedNotebookRef.h"

@interface ENNoteRef : NSObject <WFSerializableContent, NSCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebook; // ivar: _linkedNotebook
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)noteRefFromData:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)asData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif