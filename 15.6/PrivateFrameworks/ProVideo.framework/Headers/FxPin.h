// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXPIN_H
#define FXPIN_H


#import <Foundation/Foundation.h>


@interface FxPin : NSObject {
    *FxPinPriv _priv;
}




-(Class)valueClass;
-(id)description;
-(id)displayName;
-(id)init;
-(id)parentPlug;
-(id)properties;
-(id)stream;
-(id)uuid;
-(int)direction;
-(int)index;
-(void)dealloc;
-(void)setDescription:(id)arg0 ;
-(void)setDirection:(int)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setParentPlug:(id)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setValueClass:(Class)arg0 ;


@end


#endif