// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VNWEAKSESSIONSCOLLECTION_H
#define _VNWEAKSESSIONSCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allSessionsDroppingWeakZeroedObjects:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(void)addSession:(id)arg0 droppingWeakZeroedObjects:(BOOL)arg1 ;


@end


#endif