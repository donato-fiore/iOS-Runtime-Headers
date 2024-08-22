// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSBLOB_H
#define CLSBLOB_H

@class NSData, NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSBlob : CLSObject <CLSRelationable>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 data:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif