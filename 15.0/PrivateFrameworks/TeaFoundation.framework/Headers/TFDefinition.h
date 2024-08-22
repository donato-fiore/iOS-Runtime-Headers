// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFDEFINITION_H
#define TFDEFINITION_H

@class Protocol;
@protocol TFDefinitionContainer;

#import <Foundation/Foundation.h>


@interface TFDefinition : NSObject {
    id<TFDefinitionContainer> *_privateAccessContainer;
    id<TFDefinitionContainer> *_privateAccessWeakContainer;
}


@property (nonatomic) BOOL canBeNil; // ivar: _canBeNil
@property (nonatomic) BOOL canBeOverridden; // ivar: _canBeOverridden
@property (retain, nonatomic) Class cls; // ivar: _cls
@property (copy, nonatomic) id *configurationBlock; // ivar: _configurationBlock
@property (copy, nonatomic) id *factory; // ivar: _factory
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (nonatomic) NSUInteger source; // ivar: _source
@property (copy, nonatomic) id *validationBlock; // ivar: _validationBlock


-(id)canBeNil:(BOOL)arg0 ;
-(id)canBeOverridden:(BOOL)arg0 ;
-(id)description;
-(id)inScope:(NSUInteger)arg0 ;
-(id)initWithClass:(Class)arg0 factory:(id)arg1 ;
-(id)initWithProtocol:(id)arg0 factory:(id)arg1 ;
-(id)initWithUnsafeFactory:(id)arg0 ;
-(id)privateAccessContainer;
-(id)withConfiguration:(id)arg0 ;
-(id)withPrivateAccessInContainer:(id)arg0 ;
-(id)withPrivateAccessInWeakContainer:(id)arg0 ;
-(id)withValidation:(id)arg0 ;


@end


#endif