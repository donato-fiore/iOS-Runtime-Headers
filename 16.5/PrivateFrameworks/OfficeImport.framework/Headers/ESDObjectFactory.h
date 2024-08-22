// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDOBJECTFACTORY_H
#define ESDOBJECTFACTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ESDObjectFactory : NSObject {
    *EshObjectFactory eshObjectFactory;
    NSMutableArray *eshObjectFactoryStack;
}




+(id)threadLocalFactory;
-(id)init;
-(struct EshObject *)createObjectWithType:(unsigned short)arg0 ;
-(struct EshObject *)createObjectWithType:(unsigned short)arg0 version:(unsigned short)arg1 ;
-(void)dealloc;
-(void)replaceHostEshFactoryWith:(struct EshObjectFactory *)arg0 ;
-(void)restoreHostEshFactory;
-(void)setEshFactory:(struct EshObjectFactory *)arg0 ;


@end


#endif