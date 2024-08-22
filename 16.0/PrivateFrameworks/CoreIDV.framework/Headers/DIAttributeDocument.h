// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTRIBUTEDOCUMENT_H
#define DIATTRIBUTEDOCUMENT_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeDocument : DIAttribute <NSSecureCoding>



@property (nonatomic) NSUInteger acceptableDocTypes; // ivar: _acceptableDocTypes
@property (copy, nonatomic) NSArray *acceptableDocs; // ivar: _acceptableDocs
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue; // ivar: currentValue
@property (nonatomic) NSUInteger docType; // ivar: _docType
@property (nonatomic) NSString *idDocType; // ivar: _idDocType


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)initWithAcceptableDocs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif