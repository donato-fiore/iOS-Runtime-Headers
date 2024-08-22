// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYOBJECTWRAPPER_H
#define SYOBJECTWRAPPER_H

@class NSString;
@protocol SYChange, SYObject;

#import <Foundation/Foundation.h>


@interface SYObjectWrapper : NSObject <SYChange>

 {
    NSInteger _type;
}


@property (readonly, nonatomic) NSInteger changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SYObject> *wrappedObject; // ivar: _wrappedObject


-(id)initWithSYObject:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif