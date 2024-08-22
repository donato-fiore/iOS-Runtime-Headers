// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMODELSOURCE_H
#define SGMODELSOURCE_H

@class PMLSessionDescriptor;

#import <Foundation/Foundation.h>


@interface SGModelSource : NSObject

@property (retain, nonatomic) Class modelClass; // ivar: _modelClass
@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor


-(id)initWithSessionDescriptor:(id)arg0 modelClass:(Class)arg1 ;


@end


#endif