// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFSTRINGINDENTATION_H
#define CARPFSTRINGINDENTATION_H



#import "CARPFObject.h"

@interface CARPFStringIndentation : CARPFObject

@property (readonly) NSUInteger level; // ivar: _level
@property (readonly) NSUInteger width; // ivar: _width


+(id)indentation;
+(id)indentationWithWidth:(NSUInteger)arg0 ;
-(id)description;
-(id)indentationByLevels:(NSInteger)arg0 ;
-(id)init;
-(id)initWithWidth:(NSUInteger)arg0 ;


@end


#endif