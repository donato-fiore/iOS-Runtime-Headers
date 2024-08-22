// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGRESOURCE_H
#define MTLDEBUGRESOURCE_H

@class NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface MTLDebugResource : NSObject <NSObject>



@property (readonly) id *baseObject; // ivar: _baseObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(id)initWithBaseObject:(id)arg0 ;


@end


#endif