// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMDATAPAYLOAD_H
#define RTIINPUTSYSTEMDATAPAYLOAD_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;


#import "RTIDataPayload.h"
#import "RTIDocumentState.h"
#import "RTIDocumentTraits.h"
#import "RTITextOperations.h"

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding, NSCopying>

 {
    BOOL _disableUpdate;
}


@property (retain, nonatomic) RTIDocumentState *documentState; // ivar: _documentState
@property (retain, nonatomic) RTIDocumentTraits *documentTraits; // ivar: _documentTraits
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (retain, nonatomic) RTITextOperations *textOperations; // ivar: _textOperations


+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg0 ;
+(id)payloadWithData:(id)arg0 version:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(void)_unarchiveData;
-(void)updateData;


@end


#endif