// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESHAPEELEMENT_H
#define PHASESHAPEELEMENT_H


#import <Foundation/Foundation.h>

#import "PHASEShape.h"
#import "PHASEMaterial.h"

@interface PHASEShapeElement : NSObject {
    PHASEShape *_owner;
}


@property (retain, nonatomic) PHASEMaterial *material; // ivar: _material


+(id)new;
-(id)init;
-(id)initWithOwner:(id)arg0 ;
-(id)initWithOwner:(id)arg0 material:(id)arg1 ;


@end


#endif