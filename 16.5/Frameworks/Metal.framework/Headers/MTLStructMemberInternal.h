// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLSTRUCTMEMBERINTERNAL_H
#define MTLSTRUCTMEMBERINTERNAL_H

@class NSString;


#import "MTLStructMember.h"
#import "MTLType.h"

@interface MTLStructMemberInternal : MTLStructMember {
    NSString *_name;
    NSUInteger _offset;
    BOOL _dataType;
    id *_details;
    NSUInteger _argumentIndex;
    MTLType *_typeInfo;
}


@property (readonly) NSUInteger aluType; // ivar: _aluType
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly) NSUInteger raster_order_group; // ivar: _raster_order_group
@property (readonly) NSUInteger render_target; // ivar: _render_target


-(BOOL)isMemberLayoutThreadSafeWith:(id)arg0 ;
-(NSUInteger)argumentIndex;
-(NSUInteger)dataType;
-(NSUInteger)indirectArgumentIndex;
-(NSUInteger)offset;
-(id)arrayType;
-(id)dataTypeDescription;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)indirectArgumentType;
-(id)initWithName:(id)arg0 offset:(NSUInteger)arg1 dataType:(NSUInteger)arg2 pixelFormat:(NSUInteger)arg3 aluType:(NSUInteger)arg4 indirectArgumentIndex:(NSUInteger)arg5 render_target:(NSUInteger)arg6 raster_order_group:(NSUInteger)arg7 details:(id)arg8 ;
-(id)name;
-(id)pointerType;
-(id)structType;
-(id)textureReferenceType;
-(void)dealloc;
-(void)setOffset:(NSUInteger)arg0 ;


@end


#endif