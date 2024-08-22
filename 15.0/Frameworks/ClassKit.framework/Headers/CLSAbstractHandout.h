// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSABSTRACTHANDOUT_H
#define CLSABSTRACTHANDOUT_H

@class NSString, NSDate;


#import "CLSObject.h"

@interface CLSAbstractHandout : CLSObject {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}


@property (retain, nonatomic) NSDate *dateOfPublication;
@property (retain, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *instructions;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif