// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENTACTION_H
#define AXELEMENTACTION_H

@class NSString, AXElement;

#import <Foundation/Foundation.h>


@interface AXElementAction : NSObject

@property (retain, nonatomic) NSString *customActionIdentifier; // ivar: _customActionIdentifier
@property (retain, nonatomic) id *dragActivationToken; // ivar: _dragActivationToken
@property (nonatomic) CGPoint dropPoint; // ivar: _dropPoint
@property (retain, nonatomic) AXElement *element; // ivar: _element
@property (nonatomic) NSUInteger medusaGesture; // ivar: _medusaGesture
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif