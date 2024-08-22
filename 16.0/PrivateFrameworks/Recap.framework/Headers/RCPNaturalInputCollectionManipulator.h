// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPNATURALINPUTCOLLECTIONMANIPULATOR_H
#define RCPNATURALINPUTCOLLECTIONMANIPULATOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RCPNaturalInputCollectionManipulator : NSObject <NSCopying>



@property (readonly) NSInteger interactionMethod; // ivar: _interactionMethod
@property (readonly) BOOL isOpen; // ivar: _isOpen
@property (readonly) CGPoint location; // ivar: _location
@property (readonly) NSInteger sourceGroup; // ivar: _sourceGroup
@property (readonly) CGFloat zPosition; // ivar: _zPosition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocation:(struct CGPoint )arg0 zPosition:(CGFloat)arg1 sourceGroup:(NSInteger)arg2 interactionMethod:(NSInteger)arg3 isOpen:(BOOL)arg4 ;


@end


#endif