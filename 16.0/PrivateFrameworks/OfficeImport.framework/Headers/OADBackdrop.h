// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBACKDROP_H
#define OADBACKDROP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADPoint3D.h"
#import "OADVector3D.h"

@interface OADBackdrop : NSObject <NSCopying>

 {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)anchor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)normal;
-(id)up;
-(void)setAnchor:(id)arg0 ;
-(void)setNormal:(id)arg0 ;
-(void)setUp:(id)arg0 ;


@end


#endif