// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNHANDLESTRINGSCONTACTPREDICATE_H
#define CNHANDLESTRINGSCONTACTPREDICATE_H

@class NSArray;


#import "CNPredicate.h"

@interface CNHandleStringsContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *containerIdentifiers; // ivar: _containerIdentifiers
@property (readonly, copy, nonatomic) NSArray *handleStrings; // ivar: _handleStrings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cn_resultTransformWithMatchInfos:(SEL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandleStrings:(id)arg0 ;
-(id)initWithHandleStrings:(id)arg0 containerIdentifiers:(id)arg1 ;
-(id)shortDebugDescription;
-(void)cn_triageWithLog:(id)arg0 serialNumber:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif