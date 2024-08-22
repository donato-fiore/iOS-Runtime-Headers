// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPLATFORMOBJECT_H
#define CPLPLATFORMOBJECT_H

@protocol CPLAbstractObject;

#import <Foundation/Foundation.h>


@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) NSObject<CPLAbstractObject> *abstractObject; // ivar: _abstractObject


-(id)description;
-(id)init;
-(id)initWithAbstractObject:(id)arg0 ;


@end


#endif