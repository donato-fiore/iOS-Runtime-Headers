// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYOBJECTCOMPATIBILITYWRAPPER_H
#define _SYOBJECTCOMPATIBILITYWRAPPER_H

@class NSProxy, NSString;
@protocol SYChange, SYObject;



@interface _SYObjectCompatibilityWrapper : NSProxy <SYChange, SYObject>

 {
    id<SYObject> *_syObject;
    NSInteger _type;
}


@property (readonly, nonatomic) NSInteger changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;


-(id)initWithSYObject:(id)arg0 changeType:(NSInteger)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif