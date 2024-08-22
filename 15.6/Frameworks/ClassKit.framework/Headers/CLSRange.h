// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSRANGE_H
#define CLSRANGE_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSRange : CLSObject <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delta;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (nonatomic) CGFloat start; // ivar: _start
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)compressOverlappingRanges:(id)arg0 ;
+(id)relations;
-(BOOL)overlapsWith:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(id)arg0 ;
-(id)initWithStart:(CGFloat)arg0 end:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithRange:(id)arg0 ;


@end


#endif