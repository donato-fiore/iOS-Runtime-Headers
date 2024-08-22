// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKTEXTANNOTATION_H
#define RKTEXTANNOTATION_H


#import <Foundation/Foundation.h>


@interface RKTextAnnotation : NSObject

@property BOOL machineGenerated; // ivar: _machineGenerated
@property _NSRange range; // ivar: _range
@property NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithRange:(struct _NSRange )arg0 andType:(NSUInteger)arg1 machineGenerated:(BOOL)arg2 ;


@end


#endif