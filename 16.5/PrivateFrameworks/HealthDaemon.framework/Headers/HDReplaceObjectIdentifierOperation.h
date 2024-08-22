// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDREPLACEOBJECTIDENTIFIEROPERATION_H
#define HDREPLACEOBJECTIDENTIFIEROPERATION_H

@class NSString;


#import "HDJournalableOperation.h"

@interface HDReplaceObjectIdentifierOperation : HDJournalableOperation {
    NSString *_objectIdentifier;
    NSString *_replacementIdentifier;
    NSString *_schemaIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWithObjectIdentifier:(id)arg0 replacementIdentifier:(id)arg1 schemaIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif