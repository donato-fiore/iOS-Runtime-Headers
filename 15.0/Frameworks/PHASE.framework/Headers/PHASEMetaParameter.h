// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEMETAPARAMETER_H
#define PHASEMETAPARAMETER_H

@class NSString;
@protocol MetaParameterValueProtocol;

#import <Foundation/Foundation.h>


@interface PHASEMetaParameter : NSObject

@property (weak) NSObject<MetaParameterValueProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL registeredGlobally; // ivar: _registeredGlobally
@property (readonly, nonatomic) NSString *uid; // ivar: _uid
@property (retain, nonatomic) id *value; // ivar: _value


+(id)new;
-(id)init;
-(id)initWithUID:(id)arg0 delegate:(id)arg1 ;
-(void)setLocalValueOnly:(id)arg0 ;


@end


#endif