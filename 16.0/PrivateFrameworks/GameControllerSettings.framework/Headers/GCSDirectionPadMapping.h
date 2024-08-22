// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSDIRECTIONPADMAPPING_H
#define GCSDIRECTIONPADMAPPING_H



#import "GCSElementMapping.h"

@interface GCSDirectionPadMapping : GCSElementMapping

@property (nonatomic) BOOL invertHorizontally; // ivar: _invertHorizontally
@property (nonatomic) BOOL invertVertically; // ivar: _invertVertically
@property (nonatomic) BOOL swapAxes; // ivar: _swapAxes


+(BOOL)supportsSecureCoding;
+(id)archivalClasses;
-(BOOL)isCustomized;
-(id)description;
-(id)id;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElementKey:(id)arg0 mappingKey:(id)arg1 remappingOrder:(int)arg2 ;
-(id)initWithElementKey:(id)arg0 mappingKey:(id)arg1 remappingOrder:(int)arg2 invertHorizontally:(BOOL)arg3 invertVertically:(BOOL)arg4 swapAxes:(BOOL)arg5 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)jsonObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif